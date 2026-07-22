#pragma once

class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x258, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1E0, size 0x68, align 8 | MPropertyFriendlyName
    Vector m_vecRotation; // offset 0x248, size 0xC, align 4 | MPropertyFriendlyName
    bool m_bUseQuat; // offset 0x254, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bWriteNormal; // offset 0x255, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0256[0x2]; // offset 0x256
};
