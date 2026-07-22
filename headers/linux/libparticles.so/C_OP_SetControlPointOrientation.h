#pragma once

class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x360, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D1]; // offset 0x0
    bool m_bUseWorldLocation; // offset 0x1D1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01D2[0x1]; // offset 0x1D2
    bool m_bRandomize; // offset 0x1D3, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetOnce; // offset 0x1D4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01D5[0x3]; // offset 0x1D5
    int32 m_nCP; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeadLocation; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    QAngle m_vecRotation; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName
    QAngle m_vecRotationB; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInterpolation; // offset 0x1F8, size 0x168, align 8 | MPropertyFriendlyName
};
