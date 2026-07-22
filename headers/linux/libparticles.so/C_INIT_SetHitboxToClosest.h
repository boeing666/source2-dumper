#pragma once

class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xA68, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nDesiredHitbox; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x1E0, size 0x690, align 8 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x870, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x8F0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseClosestPointOnHitbox; // offset 0x8F1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08F2[0x2]; // offset 0x8F2
    ClosestPointTestType_t m_nTestType; // offset 0x8F4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flHybridRatio; // offset 0x8F8, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bUpdatePosition; // offset 0xA60, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A61[0x7]; // offset 0xA61
};
