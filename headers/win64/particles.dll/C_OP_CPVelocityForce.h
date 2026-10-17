#pragma once

class C_OP_CPVelocityForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x370, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
    CPerParticleFloatInput m_flScale; // offset 0x1F8, size 0x178, align 8 | MPropertyFriendlyName
};
