#pragma once

class C_OP_CPVelocityForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x358, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E4]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flScale; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
};
