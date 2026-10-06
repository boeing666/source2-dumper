#pragma once

struct BonusUpgrade_t  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flValue; // offset 0x0, size 0x4, align 4
    EModifierValue m_eValueType; // offset 0x4, size 0x2, align 2
    char _pad_0006[0x2]; // offset 0x6
};
