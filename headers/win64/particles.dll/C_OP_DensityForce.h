#pragma once

class C_OP_DensityForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    float32 m_flRadiusScale; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flForceScale; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTargetDensity; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01FC[0x4]; // offset 0x1FC
};
