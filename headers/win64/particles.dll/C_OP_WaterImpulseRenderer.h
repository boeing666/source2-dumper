#pragma once

class C_OP_WaterImpulseRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1068, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    CPerParticleVecInput m_vecPos; // offset 0x230, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius; // offset 0x908, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMagnitude; // offset 0xA80, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flShape; // offset 0xBF8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWindSpeed; // offset 0xD70, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWobble; // offset 0xEE8, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bIsRadialWind; // offset 0x1060, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1061[0x3]; // offset 0x1061
    EventTypeSelection_t m_nEventType; // offset 0x1064, size 0x4, align 4 | MPropertyFriendlyName
};
