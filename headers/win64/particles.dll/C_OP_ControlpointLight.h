#pragma once

class C_OP_ControlpointLight : public CParticleFunctionOperator /*0x0*/  // sizeof 0x6F0, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    float32 m_flScale; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x48C]; // offset 0x1E4
    int32 m_nControlPoint1; // offset 0x670, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPoint2; // offset 0x674, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPoint3; // offset 0x678, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPoint4; // offset 0x67C, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecCPOffset1; // offset 0x680, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vecCPOffset2; // offset 0x68C, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vecCPOffset3; // offset 0x698, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vecCPOffset4; // offset 0x6A4, size 0xC, align 4 | MPropertyFriendlyName
    float32 m_LightFiftyDist1; // offset 0x6B0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_LightZeroDist1; // offset 0x6B4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_LightFiftyDist2; // offset 0x6B8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_LightZeroDist2; // offset 0x6BC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_LightFiftyDist3; // offset 0x6C0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_LightZeroDist3; // offset 0x6C4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_LightFiftyDist4; // offset 0x6C8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_LightZeroDist4; // offset 0x6CC, size 0x4, align 4 | MPropertyFriendlyName
    Color m_LightColor1; // offset 0x6D0, size 0x4, align 4 | MPropertyFriendlyName
    Color m_LightColor2; // offset 0x6D4, size 0x4, align 4 | MPropertyFriendlyName
    Color m_LightColor3; // offset 0x6D8, size 0x4, align 4 | MPropertyFriendlyName
    Color m_LightColor4; // offset 0x6DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLightType1; // offset 0x6E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLightType2; // offset 0x6E1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLightType3; // offset 0x6E2, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLightType4; // offset 0x6E3, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLightDynamic1; // offset 0x6E4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLightDynamic2; // offset 0x6E5, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLightDynamic3; // offset 0x6E6, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLightDynamic4; // offset 0x6E7, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseNormal; // offset 0x6E8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseHLambert; // offset 0x6E9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_06EA[0x4]; // offset 0x6EA
    bool m_bClampLowerRange; // offset 0x6EE, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bClampUpperRange; // offset 0x6EF, size 0x1, align 1 | MPropertyFriendlyName
};
