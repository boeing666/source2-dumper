#pragma once

class CEnvExplosion : public CModelPointEntity /*0x0*/  // sizeof 0xAB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    int32 m_iMagnitude; // offset 0xA54, size 0x4, align 4
    float32 m_flPlayerDamage; // offset 0xA58, size 0x4, align 4
    int32 m_iRadiusOverride; // offset 0xA5C, size 0x4, align 4
    float32 m_flInnerRadius; // offset 0xA60, size 0x4, align 4
    float32 m_flDamageForce; // offset 0xA64, size 0x4, align 4
    CHandle< CBaseEntity > m_hInflictor; // offset 0xA68, size 0x4, align 4
    DamageTypes_t m_iCustomDamageType; // offset 0xA6C, size 0x4, align 4
    bool m_bCreateDebris; // offset 0xA70, size 0x1, align 1
    char _pad_0A71[0xF]; // offset 0xA71
    CUtlSymbolLarge m_iszCustomEffectName; // offset 0xA80, size 0x8, align 8
    CUtlSymbolLarge m_iszCustomSoundName; // offset 0xA88, size 0x8, align 8
    bool m_bSuppressParticleImpulse; // offset 0xA90, size 0x1, align 1
    char _pad_0A91[0x3]; // offset 0xA91
    Class_T m_iClassIgnore; // offset 0xA94, size 0x4, align 4
    Class_T m_iClassIgnore2; // offset 0xA98, size 0x4, align 4
    char _pad_0A9C[0x4]; // offset 0xA9C
    CUtlSymbolLarge m_iszEntityIgnoreName; // offset 0xAA0, size 0x8, align 8
    CHandle< CBaseEntity > m_hEntityIgnore; // offset 0xAA8, size 0x4, align 4
    char _pad_0AAC[0x4]; // offset 0xAAC
};
