#pragma once

class CEnvExplosion : public CModelPointEntity /*0x0*/  // sizeof 0xB88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    int32 m_iMagnitude; // offset 0xB2C, size 0x4, align 4
    float32 m_flPlayerDamage; // offset 0xB30, size 0x4, align 4
    int32 m_iRadiusOverride; // offset 0xB34, size 0x4, align 4
    float32 m_flInnerRadius; // offset 0xB38, size 0x4, align 4
    float32 m_flDamageForce; // offset 0xB3C, size 0x4, align 4
    CHandle< CBaseEntity > m_hInflictor; // offset 0xB40, size 0x4, align 4
    DamageTypes_t m_iCustomDamageType; // offset 0xB44, size 0x4, align 4
    bool m_bHasCustomDamageType; // offset 0xB48, size 0x1, align 1
    bool m_bCreateDebris; // offset 0xB49, size 0x1, align 1
    char _pad_0B4A[0xE]; // offset 0xB4A
    CUtlSymbolLarge m_iszCustomEffectName; // offset 0xB58, size 0x8, align 8
    CUtlSymbolLarge m_iszCustomSoundName; // offset 0xB60, size 0x8, align 8
    bool m_bSuppressParticleImpulse; // offset 0xB68, size 0x1, align 1
    char _pad_0B69[0x3]; // offset 0xB69
    Class_T m_iClassIgnore; // offset 0xB6C, size 0x4, align 4
    Class_T m_iClassIgnore2; // offset 0xB70, size 0x4, align 4
    char _pad_0B74[0x4]; // offset 0xB74
    CUtlSymbolLarge m_iszEntityIgnoreName; // offset 0xB78, size 0x8, align 8
    CHandle< CBaseEntity > m_hEntityIgnore; // offset 0xB80, size 0x4, align 4
    char _pad_0B84[0x4]; // offset 0xB84
};
