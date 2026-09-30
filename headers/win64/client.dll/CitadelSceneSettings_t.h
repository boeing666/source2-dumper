#pragma once

struct CitadelSceneSettings_t  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults}
{
    bool m_bDontPreSettleCloth; // offset 0x0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableFreezeCloth; // offset 0x1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0002[0x6]; // offset 0x2
    CUtlStringTokenWithStorage m_strClothEffect; // offset 0x8, size 0x18, align 8 | MPropertyFriendlyName
    CUtlString m_strAttachmentName; // offset 0x20, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyCustomFGDType
    float32 m_flFOV; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flZNear; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flZFar; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0034[0x4]; // offset 0x34
};
