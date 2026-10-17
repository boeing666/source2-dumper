#pragma once

class CEnvExplosion : public CModelPointEntity /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    int32 m_iMagnitude; // offset 0x858, size 0x4, align 4
    float32 m_flPlayerDamage; // offset 0x85C, size 0x4, align 4
    int32 m_iRadiusOverride; // offset 0x860, size 0x4, align 4
    float32 m_flInnerRadius; // offset 0x864, size 0x4, align 4
    float32 m_flDamageForce; // offset 0x868, size 0x4, align 4
    CHandle< CBaseEntity > m_hInflictor; // offset 0x86C, size 0x4, align 4
    DamageTypes_t m_iCustomDamageType; // offset 0x870, size 0x4, align 4
    bool m_bHasCustomDamageType; // offset 0x874, size 0x1, align 1
    bool m_bCreateDebris; // offset 0x875, size 0x1, align 1
    char _pad_0876[0xA]; // offset 0x876
    CUtlSymbolLarge m_iszCustomEffectName; // offset 0x880, size 0x8, align 8
    CUtlSymbolLarge m_iszCustomSoundName; // offset 0x888, size 0x8, align 8
    bool m_bSuppressParticleImpulse; // offset 0x890, size 0x1, align 1
    char _pad_0891[0x3]; // offset 0x891
    Class_T m_iClassIgnore; // offset 0x894, size 0x4, align 4
    Class_T m_iClassIgnore2; // offset 0x898, size 0x4, align 4
    char _pad_089C[0x4]; // offset 0x89C
    CUtlSymbolLarge m_iszEntityIgnoreName; // offset 0x8A0, size 0x8, align 8
    CHandle< CBaseEntity > m_hEntityIgnore; // offset 0x8A8, size 0x4, align 4
    char _pad_08AC[0x4]; // offset 0x8AC
};
