#pragma once

class C_OP_RemapVectorToRotations : public CParticleFunctionOperator /*0x0*/  // sizeof 0xEF0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleVecInput m_vecInput; // offset 0x1D0, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecRotation; // offset 0x860, size 0x690, align 8 | MPropertyFriendlyName
};
