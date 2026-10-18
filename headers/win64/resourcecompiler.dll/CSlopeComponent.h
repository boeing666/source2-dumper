#pragma once

class CSlopeComponent : public CAnimGraphDoc_Component /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    float32 m_flTraceDistance; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName
    AnimParamID m_slopeAngleID; // offset 0x3C, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_slopeHeadingID; // offset 0x40, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_slopeAngleSideID; // offset 0x44, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_slopeAngleFrontID; // offset 0x48, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_slopeNormalID; // offset 0x4C, size 0x4, align 4 | MPropertySuppressField
    AnimParamID m_slopeNormal_WorldSpaceID; // offset 0x50, size 0x4, align 4 | MPropertySuppressField
    char _pad_0054[0x4]; // offset 0x54
};
