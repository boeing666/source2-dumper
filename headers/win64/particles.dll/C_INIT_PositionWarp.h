#pragma once

class C_INIT_PositionWarp : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xF70, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionVecInput m_vecWarpMin; // offset 0x1E0, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionVecInput m_vecWarpMax; // offset 0x898, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nScaleControlPointNumber; // offset 0xF50, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0xF54, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRadiusComponent; // offset 0xF58, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flWarpTime; // offset 0xF5C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flWarpStartTime; // offset 0xF60, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0xF64, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bInvertWarp; // offset 0xF68, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseCount; // offset 0xF69, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F6A[0x6]; // offset 0xF6A
};
