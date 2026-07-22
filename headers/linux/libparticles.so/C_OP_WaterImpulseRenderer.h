#pragma once

class C_OP_WaterImpulseRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0xFC0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CPerParticleVecInput m_vecPos; // offset 0x220, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius; // offset 0x8B0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMagnitude; // offset 0xA18, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flShape; // offset 0xB80, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWindSpeed; // offset 0xCE8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWobble; // offset 0xE50, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bIsRadialWind; // offset 0xFB8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0FB9[0x3]; // offset 0xFB9
    EventTypeSelection_t m_nEventType; // offset 0xFBC, size 0x4, align 4 | MPropertyFriendlyName
};
