#ifndef SON8_CORE_ALIAS_DATA_HXX
#define SON8_CORE_ALIAS_DATA_HXX

#include <son8/core/alias/pour.hxx>
#include <son8/cxx/data.hxx>

namespace son8::core {
    // only uses default values for templated params
    // \ for fancy staff use `cxx` or `std` directly
    // -- standard allocators
    template < typename Type >
    using Deck = cxx::deque< Type >;
    template < typename Type >
    using Grow = cxx::vector< Type >;
    template< typename Key_Type, typename Value_Type >
    using Hash = cxx::unordered_map< Key_Type, Value_Type >;
    template< typename Type >
    using Keys = cxx::unordered_set< Type >;
    template< typename Type >
    using List = cxx::list< Type >;
    template< typename Type >
    using Tail = cxx::forward_list< Type >;
    template< typename Type >
    using Tide = cxx::set< Type >;
    template< typename Key_Type, typename Value_Type >
    using Tree = cxx::map< Key_Type, Value_Type >;
    // -- multiple
    template< typename Key_Type, typename Value_Type >
    using HashMany = cxx::unordered_multimap< Key_Type, Value_Type >;
    template< typename Type >
    using KeysMany = cxx::unordered_multiset< Type >;
    template< typename Type >
    using TideMany = cxx::multiset< Type >;
    template< typename Key_Type, typename Value_Type >
    using TreeMany = cxx::multimap< Key_Type, Value_Type >;
    // -- adaptors
    template< typename Type >
    using Order = cxx::priority_queue< Type >;
    template< typename Type >
    using Queue = cxx::queue< Type >;
    template< typename Type >
    using Stack = cxx::stack< Type >;
    // -- polymorphic allocators
    template < typename Type >
    using PolyDeck = cxx::pmr::deque< Type >;
    template< typename Type >
    using PolyGrow = cxx::pmr::vector< Type >;
    template< typename Key_Type, typename Value_Type >
    using PolyHash = cxx::pmr::unordered_map< Key_Type, Value_Type >;
    template< typename Type >
    using PolyKeys = cxx::pmr::unordered_set< Type >;
    template< typename Type >
    using PolyList = cxx::pmr::list< Type >;
    template< typename Type >
    using PolyTail = cxx::pmr::forward_list< Type >;
    template< typename Type >
    using PolyTide = cxx::pmr::set< Type >;
    template< typename Key_Type, typename Value_Type >
    using PolyTree = cxx::pmr::map< Key_Type, Value_Type >;

} // namespace

#endif // header
