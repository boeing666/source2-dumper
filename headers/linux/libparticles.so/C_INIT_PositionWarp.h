#pragma once

class C_INIT_PositionWarp : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xF18, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionVecInput m_vecWarpMin; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionVecInput m_vecWarpMax; // offset 0x868, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nScaleControlPointNumber; // offset 0xEF8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0xEFC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRadiusComponent; // offset 0xF00, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flWarpTime; // offset 0xF04, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flWarpStartTime; // offset 0xF08, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0xF0C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bInvertWarp; // offset 0xF10, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseCount; // offset 0xF11, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F12[0x6]; // offset 0xF12
};
