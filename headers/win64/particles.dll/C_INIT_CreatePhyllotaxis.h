#pragma once

class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleCP; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nComponent; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_fRadCentCore; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fRadPerPoint; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fRadPerPointTo; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fpointAngle; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fsizeOverall; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fRadBias; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fMinRad; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fDistBias; // offset 0x208, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseLocalCoords; // offset 0x20C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseWithContEmit; // offset 0x20D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseOrigRadius; // offset 0x20E, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_020F[0x1]; // offset 0x20F
};
