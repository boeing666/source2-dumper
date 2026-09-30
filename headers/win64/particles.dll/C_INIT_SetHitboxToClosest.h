#pragma once

class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xAD0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nDesiredHitbox; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x1F0, size 0x6D8, align 8 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x8C8, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x948, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseClosestPointOnHitbox; // offset 0x949, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_094A[0x2]; // offset 0x94A
    ClosestPointTestType_t m_nTestType; // offset 0x94C, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flHybridRatio; // offset 0x950, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bUpdatePosition; // offset 0xAC8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0AC9[0x7]; // offset 0xAC9
};
