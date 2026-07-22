#pragma once

class CMonsterHunterSmallRewardCategoryDefinition  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    EMonsterHunterSmallRewardCategory m_eCategory; // offset 0x0, size 0x4, align 4
    uint32 m_unActionID; // offset 0x4, size 0x4, align 4
    CUtlString m_strLocName; // offset 0x8, size 0x8, align 8
};
