#pragma once

class CEnvExplosion : public CModelPointEntity /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    int32 m_iMagnitude; // offset 0xB9C, size 0x4, align 4
    float32 m_flPlayerDamage; // offset 0xBA0, size 0x4, align 4
    int32 m_iRadiusOverride; // offset 0xBA4, size 0x4, align 4
    float32 m_flInnerRadius; // offset 0xBA8, size 0x4, align 4
    float32 m_flDamageForce; // offset 0xBAC, size 0x4, align 4
    CHandle< CBaseEntity > m_hInflictor; // offset 0xBB0, size 0x4, align 4
    DamageTypes_t m_iCustomDamageType; // offset 0xBB4, size 0x4, align 4
    bool m_bHasCustomDamageType; // offset 0xBB8, size 0x1, align 1
    bool m_bCreateDebris; // offset 0xBB9, size 0x1, align 1
    char _pad_0BBA[0xE]; // offset 0xBBA
    CUtlSymbolLarge m_iszCustomEffectName; // offset 0xBC8, size 0x8, align 8
    CUtlSymbolLarge m_iszCustomSoundName; // offset 0xBD0, size 0x8, align 8
    bool m_bSuppressParticleImpulse; // offset 0xBD8, size 0x1, align 1
    char _pad_0BD9[0x3]; // offset 0xBD9
    Class_T m_iClassIgnore; // offset 0xBDC, size 0x4, align 4
    Class_T m_iClassIgnore2; // offset 0xBE0, size 0x4, align 4
    char _pad_0BE4[0x4]; // offset 0xBE4
    CUtlSymbolLarge m_iszEntityIgnoreName; // offset 0xBE8, size 0x8, align 8
    CHandle< CBaseEntity > m_hEntityIgnore; // offset 0xBF0, size 0x4, align 4
    char _pad_0BF4[0x4]; // offset 0xBF4
};
