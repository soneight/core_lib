#ifndef SON8_CORE_HXX
#define SON8_CORE_HXX

namespace son8::core {
    // POUR ARRays
    template< typename Type > using Ptr = Type *;
    template< typename Type > using Out = Type &;
    template< typename Type > using Uni = Type &&;
    template< typename Type > using Ref = Type const &;
    template< typename Type, unsigned Size > using PtrArr = Ptr< Type[Size] >;
    template< typename Type, unsigned Size > using OutArr = Out< Type[Size] >;
    template< typename Type, unsigned Size > using UniArr = Uni< Type[Size] >;
    template< typename Type, unsigned Size > using RefArr = Ref< Type[Size] >;
} // namespace son8::core

#endif//SON8_CORE_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: `core_lib` C++17 Core Library
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
