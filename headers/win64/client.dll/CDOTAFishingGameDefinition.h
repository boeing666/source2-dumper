#pragma once

class CDOTAFishingGameDefinition  // sizeof 0x88, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataSingleton}
{
public:
    CUtlString m_strID; // offset 0x0, size 0x8, align 8
    bool m_bBurrowedFish; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x7]; // offset 0x9
    CUtlString m_strMapName; // offset 0x10, size 0x8, align 8
    CUtlString m_strBurrowedFishParticle; // offset 0x18, size 0x8, align 8
    CUtlVector< CDOTAFishingGameFish* > m_vecFishTypes; // offset 0x20, size 0x18, align 8
    CUtlOrderedMap< CUtlString, int32 > m_mapFishNameToVecIndex; // offset 0x38, size 0x28, align 8
    CUtlOrderedMap< EFishingGameFishCategory, float32 > m_mapCategoryToDifficulty; // offset 0x60, size 0x28, align 8
};
