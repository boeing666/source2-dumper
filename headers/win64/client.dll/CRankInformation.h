#pragma once

class CRankInformation  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    int32 m_nBadgeShields; // offset 0x0, size 0x4, align 4
    int32 m_nSubRankShields; // offset 0x4, size 0x4, align 4
    CUtlVector< uint32 > m_vecSubRankXP; // offset 0x8, size 0x18, align 8
    uint32 m_unRankStart; // offset 0x20, size 0x4, align 4
    uint32 m_unRankEnd; // offset 0x24, size 0x4, align 4
};
