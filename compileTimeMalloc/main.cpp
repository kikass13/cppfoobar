
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <numeric>
#include <ranges>
#include <valarray>
#include <vector>

template <typename T> class TestBuf {
public:
  constexpr TestBuf(size_t n) noexcept : size_(n), mem_(new T[n]) {}
  constexpr ~TestBuf() noexcept { delete[] mem_; }

  constexpr TestBuf(const TestBuf &other) noexcept : size_(other.size_) {
    // ...
  }

  constexpr TestBuf(TestBuf &&other) noexcept {
    // ...
  }

  constexpr TestBuf &operator=(const TestBuf &other) noexcept {
    // ...
  }

  constexpr TestBuf &operator=(TestBuf &&other) noexcept {
    // ...
  }

  constexpr T &operator[](size_t id) noexcept { return mem_[id]; }
  constexpr const T &operator[](size_t id) const noexcept { return mem_[id]; }

  constexpr T *data() const noexcept { return mem_; }
  constexpr size_t size() const noexcept { return size_; }

private:
  T *mem_{nullptr};
  size_t size_{0};
};

constexpr int naiveSumBuffer(unsigned int n) {
  TestBuf<int> buf(n); // almost a vector class!
  std::iota(buf.data(), buf.data() + n, 1);
  return std::accumulate(buf.data(), buf.data() + n, 0);
}

constexpr int naiveSum(unsigned int n) {
  auto p = new int[n];
  std::iota(p, p + n, 1);
  auto tmp = std::accumulate(p, p + n, 0);
  delete[] p;
  return tmp;
}

constexpr int smartSum(unsigned int n) { return (n * (1 + n)) / 2; }

// template <std::size_t Length, typename Generator>
// constexpr auto lut(Generator &&f) {
//   using content_type = decltype(f(std::size_t{0}));
//   std::array<content_type, Length> arr;

//   /*auto content = views::iota(std::size_t{0}, Length) // Generate a sequence
//                   | views::transform(std::forward<Generator>(f));
//      copy(content, arr.begin());
//   */
//   auto content = std::ranges::views::iota(std::size_t{0}, Length) // Generate
//   a sequence
//                  | std::ranges::views::transform(std::forward<Generator>(f));
//   std::copy(content, arr.begin());

//   //  std::ranges::view::stride(0.0001)) // Generate a sequence
//   //   auto content = std::ranges::view::iota(std::size_t{0},
//   //                                          Length) |
//   //                  std::ranges::views::transform(std::forward<Generator>(
//   //                      f)); // Transform using our generator
//   //   copy(content, arr.begin());

//   return arr;
// }

/// views::stride is not yet in c++20, so we do it on our own

auto stride = [](int n) {
  return [s = -1, n](auto const &) mutable {
    s = (s + 1) % n;
    return !s;
  };
};

template <std::size_t Length, typename Generator>
constexpr auto lut(Generator &&f) {
  using content_type = decltype(f(std::size_t{0}));
  std::array<content_type, Length> arr;

  using namespace std::ranges;
  auto content = views::iota(std::size_t{0}, Length) // Generate a sequence
               | views::transform(std::forward<Generator>(f)); // Transform
  copy(content, arr.begin());

  return arr;
}

static constexpr int divi = 1000;
static constexpr double pi = 3.14159265358979323846;
static constexpr int max = 2 * pi * divi;

auto sinLookupTable = lut<max>([](auto x) { return std::sin(static_cast<double>(x)/static_cast<double>(divi)); });

int main() {
  std::cout << smartSum(10) << std::endl;
  static_assert(naiveSum(10) == smartSum(10));
  static_assert(naiveSum(11) == smartSum(11));
  std::cout << naiveSumBuffer(10) << std::endl;
  ;
  std::cout << "==============================================" << std::endl;
  // Buffer<int> buf(); // almost a vector class!arr
  for (auto i : sinLookupTable){
    std::cout << i << ";" << std::endl;
  }
  return 0;
}