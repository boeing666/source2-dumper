#pragma once

class CFootLockItem  // sizeof 0x40, align 0x8 (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyElementNameFn}
{
public:
    CUtlString m_footName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_targetBoneName; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_ikChainName; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CGlobalSymbol m_disableTagName; // offset 0x18, size 0x8, align 8 | MPropertySuppressField
    AnimTagID m_disableTagID; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flMaxRotationLeft; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flMaxRotationRight; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_002C[0x4]; // offset 0x2C
    CGlobalSymbol m_footstepLandedTagName; // offset 0x30, size 0x8, align 8 | MPropertySuppressField
    AnimTagID m_footstepLandedTag; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_003C[0x4]; // offset 0x3C
};
