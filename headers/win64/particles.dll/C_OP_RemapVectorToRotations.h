#pragma once

class C_OP_RemapVectorToRotations : public CParticleFunctionOperator /*0x0*/  // sizeof 0xF90, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_vecInput; // offset 0x1E0, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecRotation; // offset 0x8B8, size 0x6D8, align 8 | MPropertyFriendlyName
};
