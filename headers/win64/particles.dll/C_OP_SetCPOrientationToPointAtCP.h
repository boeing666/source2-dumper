#pragma once

class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x370, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nInputCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInterpolation; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    bool m_b2DOrientation; // offset 0x368, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAvoidSingularity; // offset 0x369, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPointAway; // offset 0x36A, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_036B[0x5]; // offset 0x36B
};
