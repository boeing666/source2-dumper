#pragma once

class CAnimGraphDoc_LeanMatrixNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x98, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlString m_sequenceName; // offset 0x48, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flMaxValue; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName
    AnimVectorSource m_blendSource; // offset 0x54, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_paramName; // offset 0x58, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_param; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Vector m_verticalAxisDirection; // offset 0x64, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_horizontalAxisDirection; // offset 0x70, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_007C[0x4]; // offset 0x7C
    CAnimInputDamping m_damping; // offset 0x80, size 0x18, align 8 | MPropertyFriendlyName
};
