#pragma once

struct CitadelSceneSettings_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
    bool m_bDontPreSettleCloth; // offset 0x0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_strAttachmentName; // offset 0x8, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyCustomFGDType
    float32 m_flFOV; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flZNear; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flZFar; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_001C[0x4]; // offset 0x1C
};
