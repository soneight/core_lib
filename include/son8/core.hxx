#ifndef SON8_CORE_HXX
#define SON8_CORE_HXX

#include <son8/c/base.hxx>
#include <son8/cxx/core.hxx>

namespace son8::core {
    // POUR ARRays
    template< typename Type >
    using Ptr = Type *; // pointer to Type
    template< typename Type >
    using Out = Type &; // lvalue reference to Type
    template< typename Type >
    using Uni = Type &&; // rvalue reference to Type
    template< typename Type >
    using Ref = Type const &; // lvalue reference to constant Type
    template< typename Type, unsigned Size >
    using PtrArr = Ptr< Type[Size] >; // Type (*)[Size]: pointer to C-array
    template< typename Type, unsigned Size >
    using OutArr = Out< Type[Size] >; // Type (&)[Size]: lvalue reference to C-array
    template< typename Type, unsigned Size >
    using UniArr = Uni< Type[Size] >; // Type (&&)[Size]: rvalue reference to C-array
    template< typename Type, unsigned Size >
    using RefArr = Ref< Type[Size] >; // Type const (&)[Size]: lvalue reference to constant C-array
    // c base type aliases
    using Char = unsigned char;
    using Diff = c::ptrdiff_t;
    using Int0 = c::int8_t;  // 2^0 eq 1 byte signed
    using Int1 = c::int16_t; // 2^1 eq 2 byte signed
    using Int2 = c::int32_t; // 2^2 eq 4 byte signed
    using Int3 = c::int64_t; // 2^3 eq 8 byte signed
    using Size = c::size_t;
    using Unt0 = c::uint8_t;  // 2^0 eq 1 byte unsigned
    using Unt1 = c::uint16_t; // 2^1 eq 2 byte unsigned
    using Unt2 = c::uint32_t; // 2^2 eq 4 byte unsigned
    using Unt3 = c::uint64_t; // 2^3 eq 8 byte unsigned
    // cxx core type aliases
    template< typename Type, unsigned Size >
    using Array = cxx::array< Type, Size >;
    template< typename Type >
    using Init = cxx::initializer_list< Type >;
} // namespace son8::core

#endif//SON8_CORE_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: `core_lib` C++17 Core Library
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
