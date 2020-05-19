// Fizzy: A fast WebAssembly interpreter
// Copyright 2019-2020 The Fizzy Authors.
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "bytes.hpp"
//#include <stdint>

namespace fizzy
{
uint32_t adler32(bytes_view data)
{
    constexpr uint32_t mod = 65521;
    uint32_t a = 1;
    uint32_t b = 0;

    for (auto v : data)
    {
        a = (a + v) % mod;
        b = (b + a) % mod;
    }

    return (b << 16) | a;
}

}  // namespace fizzy
