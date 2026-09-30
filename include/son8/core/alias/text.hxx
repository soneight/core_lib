#ifndef SON8_CORE_ALIAS_TEXT_HXX
#define SON8_CORE_ALIAS_TEXT_HXX

#include <son8/core/alias/pour.hxx> // NOTE: to always include core aliases
#include <son8/cxx/text.hxx>

namespace son8::core {
    // default allocators
    using Text = cxx::string;
    using View = cxx::string_view;
    // polymorphic allocators
    using PolyText = cxx::pmr::string;

}

#endif//SON8_CORE_ALIAS_TEXT_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: `core_lib` C++17 Core Library
// Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
