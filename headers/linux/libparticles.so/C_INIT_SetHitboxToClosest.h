#pragma once

class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nDesiredHitbox; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x1E8, size 0x6B0, align 8 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x898, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x918, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseClosestPointOnHitbox; // offset 0x919, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_091A[0x2]; // offset 0x91A
    ClosestPointTestType_t m_nTestType; // offset 0x91C, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flHybridRatio; // offset 0x920, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bUpdatePosition; // offset 0xA90, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A91[0x7]; // offset 0xA91
};
