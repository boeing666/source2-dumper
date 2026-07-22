#pragma once

struct NewPlayerMetrics_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strSkillTierName; // offset 0x0, size 0x8, align 8
    int32 m_NetWorth; // offset 0x8, size 0x4, align 4
    int32 m_DamageTaken; // offset 0xC, size 0x4, align 4
    int32 m_BossDamage; // offset 0x10, size 0x4, align 4
    int32 m_PlayerDamage; // offset 0x14, size 0x4, align 4
    int32 m_LastHits; // offset 0x18, size 0x4, align 4
    int32 m_OrbsSecured; // offset 0x1C, size 0x4, align 4
    int32 m_OrbsDenied; // offset 0x20, size 0x4, align 4
    int32 m_AbilitiesUpgraded; // offset 0x24, size 0x4, align 4
    int32 m_ModsPurchased; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
