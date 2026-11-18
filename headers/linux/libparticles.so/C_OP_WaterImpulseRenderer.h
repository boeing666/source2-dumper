#pragma once

class C_OP_WaterImpulseRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1008, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CPerParticleVecInput m_vecPos; // offset 0x220, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius; // offset 0x8D0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMagnitude; // offset 0xA40, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flShape; // offset 0xBB0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWindSpeed; // offset 0xD20, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWobble; // offset 0xE90, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bIsRadialWind; // offset 0x1000, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1001[0x3]; // offset 0x1001
    EventTypeSelection_t m_nEventType; // offset 0x1004, size 0x4, align 4 | MPropertyFriendlyName
};
