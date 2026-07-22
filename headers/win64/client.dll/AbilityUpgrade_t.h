#pragma once

struct AbilityUpgrade_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< PropertyUpgrade_t > m_vecPropertyUpgrades; // offset 0x0, size 0x18, align 8 | MPropertyAutoExpandSelf
    char _pad_0018[0x10]; // offset 0x18
};
