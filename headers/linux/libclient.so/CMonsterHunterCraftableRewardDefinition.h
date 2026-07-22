#pragma once

class CMonsterHunterCraftableRewardDefinition  // sizeof 0x70, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    uint32 m_unActionID; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlOrderedMap< CUtlString, int32 > m_mapRequiredMaterials; // offset 0x8, size 0x28, align 8
    bool m_bPremium; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x3F]; // offset 0x31
};
