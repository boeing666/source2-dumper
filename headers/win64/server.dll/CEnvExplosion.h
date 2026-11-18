#pragma once

class CEnvExplosion : public CModelPointEntity /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    int32 m_iMagnitude; // offset 0x8B8, size 0x4, align 4
    float32 m_flPlayerDamage; // offset 0x8BC, size 0x4, align 4
    int32 m_iRadiusOverride; // offset 0x8C0, size 0x4, align 4
    float32 m_flInnerRadius; // offset 0x8C4, size 0x4, align 4
    float32 m_flDamageForce; // offset 0x8C8, size 0x4, align 4
    CHandle< CBaseEntity > m_hInflictor; // offset 0x8CC, size 0x4, align 4
    DamageTypes_t m_iCustomDamageType; // offset 0x8D0, size 0x4, align 4
    bool m_bHasCustomDamageType; // offset 0x8D4, size 0x1, align 1
    bool m_bCreateDebris; // offset 0x8D5, size 0x1, align 1
    char _pad_08D6[0xA]; // offset 0x8D6
    CUtlSymbolLarge m_iszCustomEffectName; // offset 0x8E0, size 0x8, align 8
    CUtlSymbolLarge m_iszCustomSoundName; // offset 0x8E8, size 0x8, align 8
    bool m_bSuppressParticleImpulse; // offset 0x8F0, size 0x1, align 1
    char _pad_08F1[0x3]; // offset 0x8F1
    Class_T m_iClassIgnore; // offset 0x8F4, size 0x4, align 4
    Class_T m_iClassIgnore2; // offset 0x8F8, size 0x4, align 4
    char _pad_08FC[0x4]; // offset 0x8FC
    CUtlSymbolLarge m_iszEntityIgnoreName; // offset 0x900, size 0x8, align 8
    CHandle< CBaseEntity > m_hEntityIgnore; // offset 0x908, size 0x4, align 4
    char _pad_090C[0x4]; // offset 0x90C
};
