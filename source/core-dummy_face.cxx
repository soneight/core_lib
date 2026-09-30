#include <son8/core.hxx>

namespace son8::core_dummy_face {
    using namespace core;

    static auto todo_name( ) -> Text {
        static constexpr Byte byte{ 8 };
        Bits< 8 > bits{ c::to_integer< int >( byte )};

        return Text{ "0b" + bits.to_string( )};
    }

}
