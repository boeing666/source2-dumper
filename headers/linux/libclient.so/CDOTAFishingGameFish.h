#pragma once

class CDOTAFishingGameFish  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_strLocName; // offset 0x0, size 0x8, align 8
    CUtlString m_strID; // offset 0x8, size 0x8, align 8
    EFishingGameFishCategory m_eCategory; // offset 0x10, size 0x4, align 4
    float32 m_flAverageWeight; // offset 0x14, size 0x4, align 4
    float32 m_flBaseModelScale; // offset 0x18, size 0x4, align 4
    float32 m_flBonusDifficulty; // offset 0x1C, size 0x4, align 4
    int32 m_nSceneModelBodyIndex; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlString m_strFlatSceneModel; // offset 0x28, size 0x8, align 8
    char _pad_0030[0x8]; // offset 0x30
};
