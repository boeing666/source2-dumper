#pragma once

class sAbilityHistory  // sizeof 0x10, align 0xFF [trivial_dtor] (client)
{
public:
    GameTime_t flAppliedTime; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    C_DOTABaseAbility* pAbility; // offset 0x8, size 0x8, align 8
};
