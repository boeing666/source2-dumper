#pragma once

class CFootPinningItem  // sizeof 0x38, align 0x8 (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyElementNameFn}
{
public:
    CUtlString m_footName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_targetBoneName; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_ikChainName; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimTagID m_tag; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_001C[0x4]; // offset 0x1C
    CUtlString m_paramName; // offset 0x20, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_param; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flMaxRotationLeft; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flMaxRotationRight; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0034[0x4]; // offset 0x34
};
