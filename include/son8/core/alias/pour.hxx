#ifndef SON8_CORE_ALIAS_POUR_HXX
#define SON8_CORE_ALIAS_POUR_HXX

#include <son8/c/base.hxx>
#include <son8/cxx/core.hxx>

namespace son8::core {
    // `POUR ARRays`
    template< typename Type >
    using Ptr = Type *; // pointer to Type
    template< typename Type >
    using Out = Type &; // `lvalue reference` to Type
    template< typename Type >
    using Uni = Type &&; // `rvalue reference` to Type
    template< typename Type >
    using Ref = Type const &; // `lvalue reference` to constant Type
    template< typename Type, unsigned Size >
    using PtrArr = Ptr< Type[Size] >; // Type `(*)[Size]`: `pointer` to C-array
    template< typename Type, unsigned Size >
    using OutArr = Out< Type[Size] >; // Type `(&)[Size]`: `lvalue reference` to C-array
    template< typename Type, unsigned Size >
    using UniArr = Uni< Type[Size] >; // Type `(&&)[Size]`: `rvalue reference` to C-array
    template< typename Type, unsigned Size >
    using RefArr = Ref< Type[Size] >; // Type `const (&)[Size]`: `lvalue reference` to constant C-array
    // built-in type aliases (is this even sane?)
    using Bool = bool;
    using Char = char;
    using Half = float;
    using Long = long long;
    using Real = double;
    using Sint = signed;
    using Uint = unsigned;
    using Void = void;
    // `c` base type aliases
    using Diff = c::ptrdiff_t;
    using Int0 = c::int8_t;  // `2^0 eq 1` byte signed
    using Int1 = c::int16_t; // `2^1 eq 2` byte signed
    using Int2 = c::int32_t; // `2^2 eq 4` byte signed
    using Int3 = c::int64_t; // `2^3 eq 8` byte signed
    using Size = c::size_t;
    using Unt0 = c::uint8_t;  // `2^0 eq 1` byte unsigned
    using Unt1 = c::uint16_t; // `2^1 eq 2` byte unsigned
    using Unt2 = c::uint32_t; // `2^2 eq 4` byte unsigned
    using Unt3 = c::uint64_t; // `2^3 eq 8` byte unsigned
    // `cxx` core type aliases
    template< typename Type, Size size >
    using Array [[deprecated("renamed, subject to be removed on release - use Flat instead")]] = cxx::array< Type, size >;
    template< Size size >
    using Bits = cxx::bitset< size >;
    template< typename Type, Size size >
    using Flat = cxx::array< Type, size >;
    template< typename Type >
    using Init = cxx::initializer_list< Type >;
    template< typename First_Type, typename Second_Type >
    using Pair = cxx::pair< First_Type, Second_Type >;
    // -- chrono
    using Clock = cxx::chrono::steady_clock;

} // namespace `son8::core`

#endif // header
