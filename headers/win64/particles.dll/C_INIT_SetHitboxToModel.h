#pragma once

class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xAD8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nForceInModel; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bEvenDistribution; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F1[0x3]; // offset 0x1F1
    int32 m_nDesiredHitbox; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x1F8, size 0x6D8, align 8 | MPropertyFriendlyName
    Vector m_vecDirectionBias; // offset 0x8D0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bMaintainHitbox; // offset 0x8DC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x8DD, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x8DE, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_095E[0x2]; // offset 0x95E
    CParticleCollectionFloatInput m_flShellSize; // offset 0x960, size 0x178, align 8 | MPropertyFriendlyName
};
