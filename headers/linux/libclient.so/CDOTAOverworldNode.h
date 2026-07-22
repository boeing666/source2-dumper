#pragma once

class CDOTAOverworldNode  // sizeof 0xA8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    OverworldNodeID_t m_unID; // offset 0x0, size 0x2, align 255 | MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_0002[0x6]; // offset 0x2
    CUtlString m_sDialogueName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sEncounterName; // offset 0x10, size 0x8, align 8
    char _pad_0018[0x8]; // offset 0x18
    CUtlString m_sRewardEventAction; // offset 0x20, size 0x8, align 8
    Vector2D m_vPos; // offset 0x28, size 0x8, align 4
    EOverworldNodeFlags m_eNodeFlags; // offset 0x30, size 0x4, align 4
    bool m_bSkipGrantingRewardOnUnlock; // offset 0x34, size 0x1, align 1
    char _pad_0035[0x3]; // offset 0x35
    CUtlString m_sHiddenWithoutEventAction; // offset 0x38, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sJSEvent; // offset 0x40, size 0x8, align 8
    CUtlString m_sCustomClass; // offset 0x48, size 0x8, align 8 | MPropertyDescription
    float32 m_flUnlockDelay; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
    float32 m_flModelRotation; // offset 0x58, size 0x4, align 4 | MPropertyDescription
    float32 m_flModelScalePercentage; // offset 0x5C, size 0x4, align 4 | MPropertyDescription
    Vector2D m_vModelOffset; // offset 0x60, size 0x8, align 4 | MPropertyDescription
    CUtlVector< CUtlString > m_vecUnlockMapClasses; // offset 0x68, size 0x18, align 8 | MPropertyDescription
    CUtlVector< CUtlString > m_vecVisitMapClasses; // offset 0x80, size 0x18, align 8 | MPropertyDescription
    char _pad_0098[0x10]; // offset 0x98
};
