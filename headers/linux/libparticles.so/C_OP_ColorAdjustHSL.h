#pragma once

class C_OP_ColorAdjustHSL : public CParticleFunctionOperator /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleFloatInput m_flHueAdjust; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flSaturationAdjust; // offset 0x338, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flLightnessAdjust; // offset 0x4A0, size 0x168, align 8 | MPropertyFriendlyName
};
