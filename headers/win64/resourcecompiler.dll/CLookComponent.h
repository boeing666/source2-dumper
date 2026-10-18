#pragma once

class CLookComponent : public CAnimGraphDoc_Component /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    bool m_bNetworkLookTarget; // offset 0x38, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0039[0x3]; // offset 0x39
    AnimParamID m_lookHeadingID; // offset 0x3C, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_lookHeadingNormalizedID; // offset 0x40, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_lookHeadingVelocityID; // offset 0x44, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_lookPitchID; // offset 0x48, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_lookDistanceID; // offset 0x4C, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_lookDirectionID; // offset 0x50, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_lookTargetID; // offset 0x54, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_lookTargetWorldSpaceID; // offset 0x58, size 0x4, align 4 | MPropertySuppressField
    char _pad_005C[0x4]; // offset 0x5C
};
