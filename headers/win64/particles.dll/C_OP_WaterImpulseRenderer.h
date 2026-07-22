#pragma once

class C_OP_WaterImpulseRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1018, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CPerParticleVecInput m_vecPos; // offset 0x228, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius; // offset 0x8E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMagnitude; // offset 0xA50, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flShape; // offset 0xBC0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWindSpeed; // offset 0xD30, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWobble; // offset 0xEA0, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bIsRadialWind; // offset 0x1010, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1011[0x3]; // offset 0x1011
    EventTypeSelection_t m_nEventType; // offset 0x1014, size 0x4, align 4 | MPropertyFriendlyName
};
