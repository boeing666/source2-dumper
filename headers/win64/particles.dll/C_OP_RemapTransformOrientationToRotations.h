#pragma once

class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator /*0x0*/  // sizeof 0x250, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1D8, size 0x68, align 8 | MPropertyFriendlyName
    Vector m_vecRotation; // offset 0x240, size 0xC, align 4 | MPropertyFriendlyName
    bool m_bUseQuat; // offset 0x24C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bWriteNormal; // offset 0x24D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_024E[0x2]; // offset 0x24E
};
