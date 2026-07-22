#pragma once

class CDestructiblePartsSystemData  // sizeof 0x30, align 0x8 (client) {MModelGameData MGetKV3ClassDefaults}
{
public:
    CUtlOrderedMap< HitGroup_t, CDestructiblePart > m_PartsDataByHitGroup; // offset 0x0, size 0x28, align 8 | MPropertyDescription
    CRangeInt m_nMinMaxNumberHitGroupsToDestroyWhenGibbing; // offset 0x28, size 0x8, align 255 | MPropertyDescription
};
