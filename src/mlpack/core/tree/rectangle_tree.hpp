/**
 * @file rectangle_tree.hpp
 * @author Andrew Wells
 *
 * Include all the necessary files to use the Rectangle Type Trees (RTree,
 * RStarTree, XTree, and HilbertRTree).
 */
#ifndef MLPACK_CORE_TREE_RECTANGLE_TREE_HPP
#define MLPACK_CORE_TREE_RECTANGLE_TREE_HPP

/* We include bounds.hpp since it gives us the necessary files.
 * However, we will not use the "ballbounds" option.
 */
#include "bounds.hpp"
#include "rectangle_tree/rectangle_tree.hpp"
#include "rectangle_tree/single_tree_traverser.hpp"
#include "rectangle_tree/single_tree_traverser_impl.hpp"
#include "rectangle_tree/dual_tree_traverser.hpp"
#include "rectangle_tree/dual_tree_traverser_impl.hpp"
#include "rectangle_tree/r_tree_split.hpp"
#include "rectangle_tree/r_star_tree_split.hpp"
#include "rectangle_tree/no_auxiliary_information.hpp"
#include "rectangle_tree/r_tree_descent_heuristic.hpp"
#include "rectangle_tree/r_star_tree_descent_heuristic.hpp"
#include "rectangle_tree/traits.hpp"
#include "rectangle_tree/x_tree_split.hpp"
#include "rectangle_tree/x_tree_auxiliary_information.hpp"
#include "rectangle_tree/hilbert_r_tree_descent_heuristic.hpp"
#include "rectangle_tree/hilbert_r_tree_split.hpp"
#include "rectangle_tree/hilbert_r_tree_auxiliary_information.hpp"
#include "rectangle_tree/recursive_hilbert_value.hpp"
#include "rectangle_tree/discrete_hilbert_value.hpp"
#include "rectangle_tree/typedef.hpp"

#endif
