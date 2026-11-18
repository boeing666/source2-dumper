#pragma once

class C_OP_WaterImpulseRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1060, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CPerParticleVecInput m_vecPos; // offset 0x228, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius; // offset 0x900, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMagnitude; // offset 0xA78, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flShape; // offset 0xBF0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWindSpeed; // offset 0xD68, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWobble; // offset 0xEE0, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bIsRadialWind; // offset 0x1058, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1059[0x3]; // offset 0x1059
    EventTypeSelection_t m_nEventType; // offset 0x105C, size 0x4, align 4 | MPropertyFriendlyName
};
