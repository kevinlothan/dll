//=======================================================================
// Copyright (c) 2014-2017 Baptiste Wicht
// Distributed under the terms of the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

#pragma once

#include "pooling_layer_desc.hpp"

namespace dll {

/*!
 * \brief Description of an Max Pooling two-dimensional layer.
 */
template <size_t T_I1, size_t T_I2, size_t T_I3, size_t T_C1, size_t T_C2, typename... Parameters>
struct mp_2d_layer_desc : pooling_2d_layer_desc<T_I1, T_I2, T_I3, T_C1, T_C2, Parameters...> {
    /*!
     * A list of all the parameters of the descriptor
     */
    using parameters = cpp::type_list<Parameters...>;

    /*! The RBM type */
    using layer_t = mp_2d_layer<mp_2d_layer_desc<T_I1, T_I2, T_I3, T_C1, T_C2, Parameters...>>;

    /*! The RBM type */
    using dyn_layer_t = dyn_mp_2d_layer<dyn_mp_2d_layer_desc<Parameters...>>;
};

/*!
 * \brief Description of an Max Pooling three-dimensional layer.
 */
template <size_t T_I1, size_t T_I2, size_t T_I3, size_t T_C1, size_t T_C2, size_t T_C3, typename... Parameters>
struct mp_3d_layer_desc : pooling_3d_layer_desc<T_I1, T_I2, T_I3, T_C1, T_C2, T_C3, Parameters...> {
    /*!
     * A list of all the parameters of the descriptor
     */
    using parameters = cpp::type_list<Parameters...>;

    /*! The RBM type */
    using layer_t = mp_3d_layer<mp_3d_layer_desc<T_I1, T_I2, T_I3, T_C1, T_C2, T_C3, Parameters...>>;

    /*! The RBM type */
    using dyn_layer_t = dyn_mp_3d_layer<dyn_mp_3d_layer_desc<Parameters...>>;
};

/*!
 * \brief Description of an Max Pooling two-dimensional layer.
 */
template <size_t T_I1, size_t T_I2, size_t T_I3, size_t T_C1, size_t T_C2, typename... Parameters>
using mp_2d_layer_desc_layer = typename mp_2d_layer_desc<T_I1, T_I2, T_I3, T_C1, T_C2, Parameters...>::layer_t;

/*!
 * \brief Description of an Max Pooling three-dimensional layer.
 */
template <size_t T_I1, size_t T_I2, size_t T_I3, size_t T_C1, size_t T_C2, size_t T_C3, typename... Parameters>
using mp_3d_layer_desc_layer = typename mp_3d_layer_desc<T_I1, T_I2, T_I3, T_C1, T_C2, T_C3, Parameters...>::layer_t;

} //end of dll namespace
