# `CORE_LIB`
> C++17 Core Library

mostly aliases for standard library types (First letter upper cased) based on `c_header` and `cxx_unit` dependencies

## Install
> TODO: cmake target on `v1.0.0` release version

### Fetch

```cmake
if( NOT TARGET son8__core_lib )
    include( FetchContent )
    message( STATUS "${SON8_APP}: FetchContent `soneight/core_lib`" )
    fetchcontent_declare(
        son8__core_lib
        GIT_REPOSITORY https://github.com/soneight/core_lib.git
        GIT_TAG        80c865bc0a51fdfa5d1199d95cb8681b3c46999e # v0.1.0
    )
    fetchcontent_makeavailable( son8__core_lib )
endif( )
message( STATUS "${SON8_APP}: target `son8__core_lib` found" )
```

## [CONTRIBUTING](./CONTRIBUTING.md)
> Project Contribution Rules

## [LICENSE](./LICENSE) [Apache-2.0](./LICENSE.Apache-2.0.md) [NOTICE](./NOTICE)
> Project Copying Rules with attribution notice

###### each folder MAY contain README with additional materials
