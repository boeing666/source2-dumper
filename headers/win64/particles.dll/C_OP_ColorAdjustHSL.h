#pragma once

class C_OP_ColorAdjustHSL : public CParticleFunctionOperator /*0x0*/  // sizeof 0x628, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_flHueAdjust; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flSaturationAdjust; // offset 0x348, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flLightnessAdjust; // offset 0x4B8, size 0x170, align 8 | MPropertyFriendlyName
};
