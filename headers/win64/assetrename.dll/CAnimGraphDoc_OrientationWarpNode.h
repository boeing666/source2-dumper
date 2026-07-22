#pragma once

class CAnimGraphDoc_OrientationWarpNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x98, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    OrientationWarpMode_t m_eMode; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    AnimParamID m_targetParamID; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    AnimParamID m_targetPositionParamID; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    AnimParamID m_fallbackTargetPositionParamID; // offset 0x54, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    OrientationWarpTargetOffsetMode_t m_eTargetOffsetMode; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    float32 m_flTargetOffset; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    AnimParamID m_targetOffsetParamID; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyAttributeChoiceName
    float32 m_flMaxRootMotionScale; // offset 0x64, size 0x4, align 4 | MPropertyFriendlyName
    OrientationWarpRootMotionSource_t m_eRootMotionSource; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_006C[0x4]; // offset 0x6C
    CAnimInputDamping m_damping; // offset 0x70, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bEnablePreferredRotationDirection; // offset 0x88, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange MPropertyDescription
    char _pad_0089[0x3]; // offset 0x89
    AnimValueSource m_ePreferredRotationDirection; // offset 0x8C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyDescription
    float32 m_flPreferredRotationThreshold; // offset 0x90, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyDescription
    char _pad_0094[0x4]; // offset 0x94
};
