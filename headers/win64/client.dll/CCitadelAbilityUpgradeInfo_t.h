#pragma once

struct CCitadelAbilityUpgradeInfo_t  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    AbilityUpgradeBits_t m_nUpgradeBits; // offset 0x0, size 0x2, align 2
    char _pad_0002[0x2]; // offset 0x2
    int32 m_nUpgradeLevel; // offset 0x4, size 0x4, align 4
};
