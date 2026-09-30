#pragma once

struct BreakablePropCurrencyReward_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
    int32 m_nAmount; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CSubclassName< 0 > m_sCurrencyPickup; // offset 0x8, size 0x10, align 8 | MPropertyDescription
};
