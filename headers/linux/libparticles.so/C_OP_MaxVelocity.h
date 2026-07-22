#pragma once

class C_OP_MaxVelocity : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleFloatInput m_flMaxVelocity; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMinVelocity; // offset 0x338, size 0x168, align 8 | MPropertyFriendlyName
};
