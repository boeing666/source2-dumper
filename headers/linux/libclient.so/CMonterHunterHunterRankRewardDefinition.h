#pragma once

class CMonterHunterHunterRankRewardDefinition  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    int32 m_nHunterRank; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_strLocRankName; // offset 0x8, size 0x8, align 8
    uint32 m_unActionID; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
