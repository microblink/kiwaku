//==================================================================================================
/**
  KIWAKU - Containers Well Made
  Copyright 2020 Joel FALCOU

  Licensed under the MIT License <http://opensource.org/licenses/MIT>.
  SPDX-License-Identifier: MIT
**/
//==================================================================================================
#ifndef KIWAKU_SHAPE_HPP_INCLUDED
#define KIWAKU_SHAPE_HPP_INCLUDED

#include <kiwaku/misc/shape.hpp>
#include <kiwaku/detail/options/shape_option.hpp>

namespace kwk
{
  //================================================================================================
  // NTTP options
  //================================================================================================
  inline constexpr auto _0D = detail::shape_option<0>{};
  inline constexpr auto _1D = detail::shape_option<1>{};
  inline constexpr auto _2D = detail::shape_option<2>{};
  inline constexpr auto _3D = detail::shape_option<3>{};
  inline constexpr auto _4D = detail::shape_option<4>{};

  template<std::size_t N> inline constexpr auto _nD = detail::shape_option<N>{};

  //================================================================================================
  // Imperative constructor
  //================================================================================================
  template<typename... T> constexpr auto of_shape(T... s) -> decltype( shape{s...} )
  {
    return shape{s...};
  }
}

#endif
