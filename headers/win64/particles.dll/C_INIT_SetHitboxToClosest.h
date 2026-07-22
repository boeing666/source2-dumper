#pragma once

class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nDesiredHitbox; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x1E8, size 0x6B8, align 8 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x8A0, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x920, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseClosestPointOnHitbox; // offset 0x921, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0922[0x2]; // offset 0x922
    ClosestPointTestType_t m_nTestType; // offset 0x924, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flHybridRatio; // offset 0x928, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bUpdatePosition; // offset 0xA98, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A99[0x7]; // offset 0xA99
};
