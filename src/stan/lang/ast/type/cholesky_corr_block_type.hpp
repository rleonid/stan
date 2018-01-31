#ifndef STAN_LANG_AST_CHOLESKY_CORR_BLOCK_TYPE_HPP
#define STAN_LANG_AST_CHOLESKY_CORR_BLOCK_TYPE_HPP

#include <stan/lang/ast/node/expression.hpp>

namespace stan {
  namespace lang {

    /**
     * Cholesky factor for a correlation matrix block var type.
     */
    struct cholesky_corr_block_type {
      /**
       * Number of rows and columns.
       */
      expression K_;

      /**
       * Construct a block var type with default values.
       */
      cholesky_corr_block_type();

      /**
       * Construct a block var type with specified values.
       * Size should be int expression - constructor doesn't check.
       *
       * @param K corr matrix num rows, columns
       */
      cholesky_corr_block_type(const expression& K);

      /**
       * Get K (corr matrix num rows, columns)
       */
      expression K() const;
    };

  }
}
#endif
