// Copyright (C) 2018-2025 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "openvino/pass/matcher_pass.hpp"
#include "transformations_visibility.hpp"

namespace ov {
namespace pass {
/**
 * @ingroup ov_transformation_common_api
 * @brief Converts Pad v12 to Pad v1
 */
class TRANSFORMATIONS_API ConvertPad12ToPad1 : public MatcherPass {
public:
    OPENVINO_MATCHER_PASS_RTTI("ConvertPad12ToPad1");
    ConvertPad12ToPad1();
};

}  // namespace pass
}  // namespace ov
