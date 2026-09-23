#pragma once

class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x260, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1E8, size 0x68, align 8 | MPropertyFriendlyName
    Vector m_vecRotation; // offset 0x250, size 0xC, align 4 | MPropertyFriendlyName
    bool m_bUseQuat; // offset 0x25C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bWriteNormal; // offset 0x25D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_025E[0x2]; // offset 0x25E
};
