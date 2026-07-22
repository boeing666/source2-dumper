#pragma once

struct WeightedSuggestion_t  // sizeof 0x8, align 0xFF [trivial_ctor trivial_dtor] (client)
{
    int32 nSuggestion; // offset 0x0, size 0x4, align 4
    float32 fWeight; // offset 0x4, size 0x4, align 4
};
