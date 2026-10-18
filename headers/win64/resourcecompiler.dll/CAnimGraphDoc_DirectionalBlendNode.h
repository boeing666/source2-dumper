#pragma once

class CAnimGraphDoc_DirectionalBlendNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x88, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlString m_animNamePrefix; // offset 0x48, size 0x8, align 8 | MPropertyFriendlyName
    AnimValueSource m_blendValueSource; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    char _pad_0054[0x4]; // offset 0x54
    CUtlString m_paramName; // offset 0x58, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_param; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bLoop; // offset 0x64, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLockBlendOnReset; // offset 0x65, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0066[0x2]; // offset 0x66
    float32 m_playbackSpeed; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_006C[0x4]; // offset 0x6C
    CAnimInputDamping m_damping; // offset 0x70, size 0x18, align 8 | MPropertyFriendlyName
};
