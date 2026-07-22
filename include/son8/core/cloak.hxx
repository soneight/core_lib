#ifndef SON8_CORE_CLOAK_HXX
#define SON8_CORE_CLOAK_HXX

#include <son8/core/alias/pour.hxx>
#include <son8/cxx/atom.hxx>
#include <son8/cxx/meta.hxx>

namespace son8::core {

    template< typename Type >
    class Atom final : private cxx::atomic< Type > {
        static_assert( cxx::is_nothrow_default_constructible_v< Type > and
            ( cxx::is_integral_v< Type > || cxx::is_pointer_v< Type > )
            , "son8::core_lib: Atom requires nothrow default constructible, integral or pointer type" );
        using Base = cxx::atomic< Type >;
    public:
        using Base::is_lock_free;
        using Base::is_always_lock_free;
        Atom( ) = default;
        explicit Atom( Type init ) noexcept : Base{ init } { }
        // loads
        [[nodiscard]]
        Type load_default( ) const noexcept { return Base::load( ); }
        [[nodiscard]]
        Type load_relaxed( ) const noexcept { return Base::load( cxx::memory_order_relaxed ); }
        [[nodiscard]]
        Type load_acquire( ) const noexcept { return Base::load( cxx::memory_order_acquire ); }
        // stores
        Void save_default( Type val ) noexcept { return Base::store( val ); }
        Void save_relaxed( Type val ) noexcept { return Base::store( val, cxx::memory_order_relaxed ); }
        Void save_release( Type val ) noexcept { return Base::store( val, cxx::memory_order_release ); }
        // bits
        Type fetch_combine_and( Type val ) noexcept { return Base::fetch_and( val, cxx::memory_order_acq_rel ); }
        Type fetch_combine_ore( Type val ) noexcept { return Base::fetch_xor( val, cxx::memory_order_acq_rel ); }
        Type fetch_combine_ori( Type val ) noexcept { return Base::fetch_or( val, cxx::memory_order_acq_rel ); }
        // math
        Type fetch_relaxed_inc( Type val = 1 ) noexcept { return Base::fetch_add( val, cxx::memory_order_relaxed ); }
        Type fetch_relaxed_dec( Type val = 1 ) noexcept { return Base::fetch_sub( val, cxx::memory_order_relaxed ); }
        // swap
        Type exchange_default( Type val ) noexcept { return Base::exchange( val ); }
        // compare and swap
        // -- strong
        Bool cas_default_hard( Type &outExpect, Type val ) noexcept { return Base::compare_exchange_strong( outExpect, val ); }
        Bool cas_combine_hard( Type &outExpect, Type val ) noexcept { return Base::compare_exchange_strong( outExpect, val, cxx::memory_order_acq_rel, cxx::memory_order_acquire ); }
        Bool cas_release_hard( Type &outExpect, Type val ) noexcept { return Base::compare_exchange_strong( outExpect, val, cxx::memory_order_release, cxx::memory_order_relaxed ); }
        // -- weak
        Bool cas_default_soft( Type &outExpect, Type val ) noexcept { return Base::compare_exchange_weak( outExpect, val ); }
        Bool cas_combine_soft( Type &outExpect, Type val ) noexcept { return Base::compare_exchange_weak( outExpect, val, cxx::memory_order_acq_rel, cxx::memory_order_acquire ); }
        Bool cas_release_soft( Type &outExpect, Type val ) noexcept { return Base::compare_exchange_weak( outExpect, val, cxx::memory_order_release, cxx::memory_order_relaxed ); }
    };

} // namespace

#endif // header
