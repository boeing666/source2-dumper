#pragma once

struct IKDemoCaptureSettings_t  // sizeof 0x28, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
    CUtlString m_parentBoneName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    IKChannelMode m_eMode; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_ikChainName; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    CUtlString m_oneBoneStart; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    CUtlString m_oneBoneEnd; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
};
