#pragma once

struct HeroStatsDisplay_t  // sizeof 0x90, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< EStatsType > m_vecWeaponHeaderStats; // offset 0x0, size 0x18, align 8 | MPropertyDescription
    CUtlVector< EStatsType > m_vecWeaponStats; // offset 0x18, size 0x18, align 8 | MPropertyDescription
    CUtlVector< EStatsType > m_vecHealthHeaderStats; // offset 0x30, size 0x18, align 8 | MPropertyDescription
    CUtlVector< EStatsType > m_vecHealthStats; // offset 0x48, size 0x18, align 8 | MPropertyDescription
    CUtlVector< EStatsType > m_vecMagicHeaderStats; // offset 0x60, size 0x18, align 8 | MPropertyDescription
    CUtlVector< EStatsType > m_vecMagicStats; // offset 0x78, size 0x18, align 8 | MPropertyDescription
};
