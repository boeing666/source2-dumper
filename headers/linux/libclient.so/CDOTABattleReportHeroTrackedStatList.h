#pragma once

class CDOTABattleReportHeroTrackedStatList  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    HeroID_t m_nHeroID; // offset 0x0, size 0x4, align 255 | MPropertySuppressExpr
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< CUtlString > m_vecTrackedStatNames; // offset 0x8, size 0x18, align 8
};
