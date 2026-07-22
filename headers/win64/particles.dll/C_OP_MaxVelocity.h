#pragma once

class C_OP_MaxVelocity : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_flMaxVelocity; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMinVelocity; // offset 0x348, size 0x170, align 8 | MPropertyFriendlyName
};
