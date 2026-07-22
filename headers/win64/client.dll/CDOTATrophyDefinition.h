#pragma once

class CDOTATrophyDefinition  // sizeof 0x68, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    uint16 m_nID; // offset 0x8, size 0x2, align 2 | MPropertyDescription MVDataUniqueMonotonicInt MPropertyAttributeEditor
    bool m_bObtainable; // offset 0xA, size 0x1, align 1 | MPropertyDescription
    bool m_bShowProgressBar; // offset 0xB, size 0x1, align 1 | MPropertyDescription
    bool m_bShowInitialEarn; // offset 0xC, size 0x1, align 1 | MPropertyDescription
    char _pad_000D[0x3]; // offset 0xD
    CUtlString m_sCreationDate; // offset 0x10, size 0x8, align 8 | MPropertyDescription
    char _pad_0018[0x4]; // offset 0x18
    uint32 m_nBadgePointsPerUnit; // offset 0x1C, size 0x4, align 4 | MPropertyDescription MPropertyHideField
    uint32 m_nUnitsPerBadgePoint; // offset 0x20, size 0x4, align 4 | MPropertyDescription MPropertyHideField
    uint32 m_nMaxUnitsForBadgePoints; // offset 0x24, size 0x4, align 4 | MPropertyDescription MPropertyHideField
    uint32 m_nSortTier; // offset 0x28, size 0x4, align 4 | MPropertyDescription MPropertyHideField
    char _pad_002C[0x4]; // offset 0x2C
    CUtlString m_sLocCategory; // offset 0x30, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sLocName; // offset 0x38, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sLocDescription; // offset 0x40, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sLocUnitsPluralizable; // offset 0x48, size 0x8, align 8 | MPropertyDescription
    CUtlVector< TrophyLevel_t > m_vecLevels; // offset 0x50, size 0x18, align 8 | MPropertyAutoExpandSelf
};
