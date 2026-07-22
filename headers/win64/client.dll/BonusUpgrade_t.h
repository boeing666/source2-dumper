#pragma once

struct BonusUpgrade_t  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flValue; // offset 0x0, size 0x4, align 4
    EModifierValue m_eValueType; // offset 0x4, size 0x4, align 4
};
