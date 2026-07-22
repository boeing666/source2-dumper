#pragma once

struct IKTargetSettings_t  // sizeof 0x28, align 0xFF (animgraphlib)
{
    IKTargetSource m_TargetSource; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0004[0x4]; // offset 0x4
    IKBoneNameAndIndex_t m_Bone; // offset 0x8, size 0x10, align 255 | MPropertyFriendlyName MPropertyAttrStateCallback
    AnimParamID m_AnimgraphParameterNamePosition; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    AnimParamID m_AnimgraphParameterNameOrientation; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    IKTargetCoordinateSystem m_TargetCoordSystem; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0024[0x4]; // offset 0x24
};
