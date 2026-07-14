cmake_minimum_required( VERSION 3.8...3.27 )
project( core_lib VERSION 0.0.3 LANGUAGES CXX )
set( SON8_LIB son8__${PROJECT_NAME} )
# private configuration under source directory
add_subdirectory( source )
add_library( son8::${PROJECT_NAME} ALIAS ${SON8_LIB} )
target_compile_features( ${SON8_LIB} INTERFACE cxx_std_17 )
target_compile_options( ${SON8_LIB} INTERFACE $<$<CXX_COMPILER_ID:MSVC>:/utf-8 /permissive- /Zc:__cplusplus> )
target_include_directories( ${SON8_LIB} INTERFACE include )
target_link_libraries( ${SON8_LIB} INTERFACE son8::c_header son8::cxx_unit )

# Apache License 2.0
# NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
# SPDX-License-Identifier: Apache-2.0
# lib: `core_lib` C++17 Core Library
# Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
