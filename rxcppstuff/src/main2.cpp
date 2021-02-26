#include "rxcpp/rx.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <thread>

namespace rxop = rxcpp::operators;

template <typename T>
using subject_t //= rxcpp::subjects::synchronize<T,
                // rxcpp::observe_on_one_worker>;
    = rxcpp::subjects::subject<T>;

int main() {
  subject_t<char> rx_message_subject_1{/*rxcpp::observe_on_new_thread()*/};
  subject_t<char> rx_message_subject_2{/*rxcpp::observe_on_new_thread()*/};
  auto workthread = rxcpp::synchronize_new_thread();
  rxcpp::observable<char> rx_message_obs_1 =
      rx_message_subject_1.get_observable() |
      rxop::tap([&](char c) { std::cout << "~~> " << c << std::endl; });
  rxcpp::observable<char> rx_message_obs_2 =
      rx_message_subject_2.get_observable() |
      rxop::tap([&](char c) { std::cout << "--> " << c << std::endl; });

  rxcpp::observable<std::tuple<char, char>> rx_with_from_obs =
      rx_message_obs_1 | rxop::combine_latest(rx_message_obs_2);

  auto subscriber =
      rx_with_from_obs | rxop::subscribe_on(workthread) |
      rxop::subscribe<std::tuple<char, char>>([&](std::tuple<char, char> cc) {
        std::cout << "::::::: " << std::get<0>(cc) << ", " << std::get<1>(cc)
                  << std::endl;
      });

  char Q;
  while (true) {
    std::cin >> Q;
    if (Q == 'q') {
      break;
    } else {
      // push new character into rx queue
      if (isdigit(Q)) {
        rx_message_subject_1.get_subscriber().on_next(Q);
      } else {
        rx_message_subject_2.get_subscriber().on_next(Q);
      }
    }
  }

  return 0;
}
