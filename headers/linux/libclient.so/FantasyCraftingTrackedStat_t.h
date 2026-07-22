#pragma once

struct FantasyCraftingTrackedStat_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CUtlString m_sStatName; // offset 0x0, size 0x8, align 8 | MPropertyDescription
    EFantasyStatType m_eStatType; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    uint32 m_unThresholdValue; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    bool m_bThresholdIsMin; // offset 0x10, size 0x1, align 1 | MPropertyDescription
    char _pad_0011[0x7]; // offset 0x11
};
