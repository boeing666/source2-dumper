#pragma once

class CAnimGraphDoc_AimMatrixNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xC0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x48, size 0x8, align 4 | MPropertySuppressField
    CUtlString m_sequenceName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flMaxYawAngle; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxPitchAngle; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName
    AnimVectorSource m_target; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0064[0x4]; // offset 0x64
    CUtlString m_paramName; // offset 0x68, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_param; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    bool m_bIsPosition; // offset 0x74, size 0x1, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0075[0x3]; // offset 0x75
    CUtlString m_attachmentName; // offset 0x78, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AimMatrixBlendMode m_blendMode; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0084[0x4]; // offset 0x84
    CUtlString m_boneMaskName; // offset 0x88, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    bool m_bResetBase; // offset 0x90, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLockWhenWaning; // offset 0x91, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBiasAndClamp; // offset 0x92, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0093[0x1]; // offset 0x93
    float32 m_flBiasAndClampYawOffset; // offset 0x94, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    float32 m_flBiasAndClampPitchOffset; // offset 0x98, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    CBlendCurve m_biasAndClampBlendCurve; // offset 0x9C, size 0x8, align 4 | MPropertyFriendlyName MPropertyAttributeEditor MPropertyAttrStateCallback
    char _pad_00A4[0x4]; // offset 0xA4
    CAnimInputDamping m_damping; // offset 0xA8, size 0x18, align 8 | MPropertyFriendlyName
};
