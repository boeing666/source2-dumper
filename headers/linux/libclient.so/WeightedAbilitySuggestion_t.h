#pragma once

struct WeightedAbilitySuggestion_t  // sizeof 0x8, align 0xFF [trivial_dtor] (client)
{
    AbilityID_t nSuggestion; // offset 0x0, size 0x4, align 255
    float32 fWeight; // offset 0x4, size 0x4, align 4
};
