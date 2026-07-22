#pragma once

class CDampedValueItem  // sizeof 0x50, align 0x8 (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    DampedValueType m_valueType; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_floatParamNameIn; // offset 0x8, size 0x8, align 8 | MPropertySuppressField
    CUtlString m_floatParamNameOut; // offset 0x10, size 0x8, align 8 | MPropertySuppressField
    CUtlString m_vectorParamNameIn; // offset 0x18, size 0x8, align 8 | MPropertySuppressField
    CUtlString m_vectorParamNameOut; // offset 0x20, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_floatParamIn; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    AnimParamID m_floatParamOut; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    AnimParamID m_vectorParamIn; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    AnimParamID m_vectorParamOut; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    CAnimInputDamping m_damping; // offset 0x38, size 0x18, align 8 | MPropertyFriendlyName
};
