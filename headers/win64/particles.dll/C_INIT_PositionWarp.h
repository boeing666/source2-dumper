#pragma once

class C_INIT_PositionWarp : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xFB8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleCollectionVecInput m_vecWarpMin; // offset 0x1E8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionVecInput m_vecWarpMax; // offset 0x8C0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nScaleControlPointNumber; // offset 0xF98, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0xF9C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRadiusComponent; // offset 0xFA0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flWarpTime; // offset 0xFA4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flWarpStartTime; // offset 0xFA8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0xFAC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bInvertWarp; // offset 0xFB0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseCount; // offset 0xFB1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0FB2[0x6]; // offset 0xFB2
};
