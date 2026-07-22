#pragma once

class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nChildGroupID; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nFirstControlPoint; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nNumControlPoints; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nFirstSourcePoint; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bReverse; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetOrientation; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E2[0x2]; // offset 0x1E2
    ParticleOrientationSetMode_t m_nOrientationMode; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleParentSetMode_t m_nSetParent; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
};
