#pragma once

class C_OP_WaterImpulseRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1010, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CPerParticleVecInput m_vecPos; // offset 0x228, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius; // offset 0x8D8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMagnitude; // offset 0xA48, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flShape; // offset 0xBB8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWindSpeed; // offset 0xD28, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWobble; // offset 0xE98, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bIsRadialWind; // offset 0x1008, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1009[0x3]; // offset 0x1009
    EventTypeSelection_t m_nEventType; // offset 0x100C, size 0x4, align 4 | MPropertyFriendlyName
};
