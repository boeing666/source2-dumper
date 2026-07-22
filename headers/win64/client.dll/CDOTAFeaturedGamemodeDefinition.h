#pragma once

class CDOTAFeaturedGamemodeDefinition  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    uint16 m_nID; // offset 0x18, size 0x2, align 2 | MPropertyDescription MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_001A[0x2]; // offset 0x1A
    DOTA_GameMode m_eGameMode; // offset 0x1C, size 0x4, align 4 | MPropertyDescription
    CUtlString m_sCustomGame; // offset 0x20, size 0x8, align 8 | MPropertyDescription
    int32 m_nShardsPerWin; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    int32 m_nShardsPerLoss; // offset 0x2C, size 0x4, align 4 | MPropertyDescription
    CUtlString m_sStartTime; // offset 0x30, size 0x8, align 8 | MPropertyDescription
    char _pad_0038[0x8]; // offset 0x38
    CUtlString m_sEndTime; // offset 0x40, size 0x8, align 8 | MPropertyDescription
    char _pad_0048[0x8]; // offset 0x48
};
