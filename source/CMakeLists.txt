set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )

add_library( ${SON8_LIB} INTERFACE )

# son8 libraries
# -- c_header
if( NOT TARGET son8__c_header )
    include( FetchContent )
    message( STATUS "${SON8_LIB}: FetchContent `soneight/c_header`" )
    fetchcontent_declare(
        son8__c_header
        GIT_REPOSITORY https://github.com/soneight/c_header.git
        GIT_TAG        8a6c65bb738da26f1852a7e3f251b3a57e394241 # v0.1.2
    )
    fetchcontent_makeavailable( son8__c_header )
endif( )
message( STATUS "${SON8_LIB}: found `son8__c_header` target" )
# -- cxx_unit
if( NOT TARGET son8__cxx_unit )
    include( FetchContent )
    message( STATUS "${SON8_LIB}: FetchContent `soneight/cxx_unit`" )
    fetchcontent_declare(
        son8__cxx_unit
        GIT_REPOSITORY https://github.com/soneight/cxx_unit.git
        GIT_TAG        8ebb9164b12ee773c1810bd65e21ee029378768d # v0.1.1
    )
    fetchcontent_makeavailable( son8__cxx_unit )
endif( )
message( STATUS "${SON8_LIB}: found `son8__cxx_unit` target" )

option( SON8_CORE_LIB_DUMMY_FACE_BUILD "build interface dummy static library" OFF )

if( SON8_CORE_LIB_DUMMY_FACE_BUILD )
    set( SON8_CORE_LIB_DUMMY_FACE core-dummy_face )
    add_library( ${SON8_CORE_LIB_DUMMY_FACE} STATIC )
    target_sources( ${SON8_CORE_LIB_DUMMY_FACE} PRIVATE ${SON8_CORE_LIB_DUMMY_FACE}.cxx )
    target_link_libraries( ${SON8_CORE_LIB_DUMMY_FACE} PRIVATE ${SON8_LIB} )
endif( )

# Apache License 2.0
# NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
# SPDX-License-Identifier: Apache-2.0
# lib: `core_lib` C++17 Core Library
# Ⓒ Copyright (c) 2026 Oleg'Ease'Kharchuk ᦒ
