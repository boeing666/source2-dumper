#pragma once

class CEnvExplosion : public CModelPointEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    int32 m_iMagnitude; // offset 0x780, size 0x4, align 4
    float32 m_flPlayerDamage; // offset 0x784, size 0x4, align 4
    int32 m_iRadiusOverride; // offset 0x788, size 0x4, align 4
    float32 m_flInnerRadius; // offset 0x78C, size 0x4, align 4
    float32 m_flDamageForce; // offset 0x790, size 0x4, align 4
    CHandle< CBaseEntity > m_hInflictor; // offset 0x794, size 0x4, align 4
    DamageTypes_t m_iCustomDamageType; // offset 0x798, size 0x4, align 4
    bool m_bCreateDebris; // offset 0x79C, size 0x1, align 1
    char _pad_079D[0xB]; // offset 0x79D
    CUtlSymbolLarge m_iszCustomEffectName; // offset 0x7A8, size 0x8, align 8
    CUtlSymbolLarge m_iszCustomSoundName; // offset 0x7B0, size 0x8, align 8
    bool m_bSuppressParticleImpulse; // offset 0x7B8, size 0x1, align 1
    char _pad_07B9[0x3]; // offset 0x7B9
    Class_T m_iClassIgnore; // offset 0x7BC, size 0x4, align 4
    Class_T m_iClassIgnore2; // offset 0x7C0, size 0x4, align 4
    char _pad_07C4[0x4]; // offset 0x7C4
    CUtlSymbolLarge m_iszEntityIgnoreName; // offset 0x7C8, size 0x8, align 8
    CHandle< CBaseEntity > m_hEntityIgnore; // offset 0x7D0, size 0x4, align 4
    char _pad_07D4[0x4]; // offset 0x7D4
};
