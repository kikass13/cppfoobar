
#include <iostream>
#include <tuple>

#include "magic_enum.hpp"

namespace system_description {

enum class NodePurpose : unsigned int { MASTER = 0, SLAVE = 1, MISC = 2 };
enum class NodeType : uint8_t {
  LOW_LEVEL_COMPUTE = 0,
  TEST1 = 25,
  TEST2 = 26,
  TEST3 = 27,
  TEST4 = 28,
  NONE = 31
}; /// 2^5=32[0-31] valid possibilities

template <NodeType NType, NodePurpose NPurpose = NodePurpose::SLAVE>
struct NodeDescription {
  static constexpr NodePurpose Purpose =
      NPurpose; // defines if master, slave or miscellaneous
  static constexpr NodeType Type = NType; // node type
  const char *name =
      magic_enum::enum_name(Type).data(); /// descriptive node name
  unsigned int subchannel : 5 = magic_enum::enum_integer(
      Type); /// used when multiple slaves are on the same bus
};

/// declare all nodes in the system
constexpr auto nodes = std::make_tuple(
    NodeDescription<NodeType::LOW_LEVEL_COMPUTE, NodePurpose::MASTER>{},
    NodeDescription<NodeType::TEST1>{}, NodeDescription<NodeType::TEST2>{},
    NodeDescription<NodeType::TEST3, NodePurpose::MISC>{},
    NodeDescription<NodeType::TEST4>{},
    NodeDescription<NodeType::NONE, NodePurpose::MISC>{});

namespace detail {

/// =================================================================
// template<std::size_t i, class Tuple, std::size_t... is>
// constexpr auto element_as_tuple(const Tuple& tuple,
// std::index_sequence<is...>)
// {
//     if constexpr (!(std::is_same_v<std::tuple_element_t<i, Tuple>,
//                   std::tuple_element_t<is, Tuple>> || ...))
//         return std::make_tuple(std::get<i>(tuple));
//     else
//         return std::make_tuple();
// }

// template<class Tuple, std::size_t... is>
// constexpr auto make_tuple_unique(const Tuple& tuple,
// std::index_sequence<is...>)
// {
//     return std::tuple_cat(element_as_tuple<is>(tuple,
//                           std::make_index_sequence<is>{})...);
// }

// template<class... Tuples>
// constexpr auto make_tuple_unique(const Tuples&... tuples)
// {
//     auto all = std::tuple_cat(tuples...);
//     constexpr auto size = std::tuple_size_v<decltype(all)>;
//     return make_tuple_unique(all, std::make_index_sequence<size>{});
// }
template <typename Tuple1, typename Tuple2> auto zip() {
  static_assert(std::tuple_size<Tuple1>() == std::tuple_size<Tuple2>(),
                "Both tuples need equal length to be zipped!");
  return std::apply(
      [&](auto &&... x) {
        return std::apply(
            [&](auto &&... y) { return std::make_tuple(std::pair(x, y)...); },
            Tuple2{});
      },
      Tuple1{});
}

/// =================================================================

template <NodeType T, template <NodeType, NodePurpose> typename Head,
          NodeType A, NodePurpose B, typename... Tail>
constexpr auto get_node_by_type(std::tuple<Head<A, B>, Tail...> t) {
  if constexpr (T == A) {
    return std::get<Head<A, B>>(t);
  } else {
    auto newTuple =
        std::apply([](auto && /*e1*/,
                      auto &&... args) { return std::make_tuple(args...); },
                   t);
    return get_node_by_type<T>(newTuple);
  }
}

template <template <NodeType, NodePurpose> typename Head, NodeType A,
          NodePurpose B, typename... Tail>
constexpr auto get_master_node(std::tuple<Head<A, B>, Tail...> t) {
  if constexpr (B == NodePurpose::MASTER) {
    return std::get<Head<A, B>>(t);
  } else if constexpr (0 ==
                       sizeof...(
                           Tail)) { // If we have iterated through all elements
    static_assert(true, "No Master Node Found!!!!");
  } else {
    auto newTuple =
        std::apply([](auto && /*e1*/,
                      auto &&... args) { return std::make_tuple(args...); },
                   t);
    return get_master_node(newTuple);
  }
}

constexpr auto get_slave_nodes(std::tuple<> /*none*/) {
  return std::make_tuple();
}
template <template <NodeType, NodePurpose> typename Head, NodeType A,
          NodePurpose B, typename... Tail>
constexpr auto get_slave_nodes(std::tuple<Head<A, B>, Tail...> t) {
  auto newTuple = std::apply(
      [](auto && /*e1*/, auto &&... args) { return std::make_tuple(args...); },
      t);
  if constexpr (B == NodePurpose::SLAVE) {
    return std::tuple_cat(std::make_tuple(std::get<Head<A, B>>(t)),
                          get_slave_nodes(newTuple));
  } else {
    return std::tuple_cat(get_slave_nodes(newTuple));
  }
}

} // namespace detail

template <NodeType T> static constexpr auto getNodeDescription() {
  return detail::get_node_by_type<T>(nodes);
}
static constexpr auto getMasterNode() { return detail::get_master_node(nodes); }
static constexpr auto getSlaveNodes() { return detail::get_slave_nodes(nodes); }

template <typename InterfacesTuple> static constexpr auto zipSlaveInterfaces() {
  using SlaveNodeDescriptions = decltype(system_description::getSlaveNodes());
  return detail::zip<InterfacesTuple, SlaveNodeDescriptions>();
}

} // namespace system_description

/// some randome pseudo interfaces

struct Interface {
  const char *name;
  Interface(const char *n) : name{n} {}
};
struct Can1 : Interface {
  Can1() : Interface{"Can1"} {}
};
struct Can2 : Interface {
  Can2() : Interface{"Can2"} {}
};
struct Can3 : Interface {
  Can3() : Interface{"Can3"} {}
};

int main() {
  std::cout << "============================" << std::endl;

  std::cout << system_description::getNodeDescription<
                   system_description::NodeType::TEST1>()
                   .name
            << std::endl;
  std::cout << system_description::getMasterNode().name << std::endl;
  std::cout << "\nSlaves: " << std::endl;
  std::apply([](auto &&... n) { ((std::cout << n.name << std::endl), ...); },
             system_description::getSlaveNodes());
  std::cout << std::endl;

  using myInterfaces = std::tuple<Can1, Can2, Can3>;
  using Zipped =
      decltype(system_description::zipSlaveInterfaces<myInterfaces>());
  std::apply(
      [](auto &&... z) {
        ((std::cout << " - " << z.first.name << ":" << z.second.name
                    << std::endl),
         ...);
      },
      Zipped{});
  std::cout << "============================" << std::endl;

  return 0;
}