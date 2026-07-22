#pragma once

class CDOTAOverworldTarotCard  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    OverworldTarotCardID_t m_unID; // offset 0x0, size 0x1, align 255 | MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_sName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    bool m_bIsCardBack; // offset 0x10, size 0x1, align 1 | MPropertyDescription
    char _pad_0011[0x3]; // offset 0x11
    EOverworldFortuneReward m_eFortuneReward; // offset 0x14, size 0x4, align 4 | MPropertyDescription
    EOverworldFortuneRequirement m_eFortuneRequirement; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    EOverworldFortuneModifier m_eFortuneModifier; // offset 0x1C, size 0x4, align 4 | MPropertyDescription
    CUtlString m_sFortunePosition1; // offset 0x20, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sFortunePosition2; // offset 0x28, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sFortunePosition3; // offset 0x30, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sSoundEventName; // offset 0x38, size 0x8, align 8
    CUtlVector< CUtlString > m_vecSoundEventOptions; // offset 0x40, size 0x18, align 8
    uint32 m_unUnlockReward; // offset 0x58, size 0x4, align 4 | MPropertyDescription
    char _pad_005C[0x4]; // offset 0x5C
};
