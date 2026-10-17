#pragma once

class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x388, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    bool m_bUseWorldLocation; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E9[0x1]; // offset 0x1E9
    bool m_bRandomize; // offset 0x1EA, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetOnce; // offset 0x1EB, size 0x1, align 1 | MPropertyFriendlyName
    int32 m_nCP; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeadLocation; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    QAngle m_vecRotation; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName
    QAngle m_vecRotationB; // offset 0x200, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_020C[0x4]; // offset 0x20C
    CParticleCollectionFloatInput m_flInterpolation; // offset 0x210, size 0x178, align 8 | MPropertyFriendlyName
};
