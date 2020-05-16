// Fizzy: A fast WebAssembly interpreter
// Copyright 2019-2020 The Fizzy Authors.
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <cstdint>

namespace fizzy
{
struct InstructionMetrics
{
    /// The minimum number of the stack items required for the instruction.
    int8_t stack_height_required;

    /// The stack height change caused by the instruction execution,
    /// i.e. stack height _after_ execution - stack height _before_ execution.
    int8_t stack_height_change;

    /// The memory width in bytes the instruction operates on or 0 in case not using the memory.
    uint8_t memory_width;
};

const InstructionMetrics* get_instruction_metrics_table() noexcept;

}  // namespace fizzy
