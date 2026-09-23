#pragma once

class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nForceInModel; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bEvenDistribution; // offset 0x1E4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E5[0x3]; // offset 0x1E5
    int32 m_nDesiredHitbox; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x1F0, size 0x6B0, align 8 | MPropertyFriendlyName
    Vector m_vecDirectionBias; // offset 0x8A0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bMaintainHitbox; // offset 0x8AC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x8AD, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x8AE, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_092E[0x2]; // offset 0x92E
    CParticleCollectionFloatInput m_flShellSize; // offset 0x930, size 0x170, align 8 | MPropertyFriendlyName
};
