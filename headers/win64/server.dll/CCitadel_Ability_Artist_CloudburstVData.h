#pragma once

class CCitadel_Ability_Artist_CloudburstVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x12A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ZapModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ProjectileArmedModifier; // offset 0x10A0, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x10B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProjectileLoopingSound; // offset 0x10C0, size 0x10, align 8
    CSoundEventName m_strExplosionSound; // offset 0x10D0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x10E0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x11C0, size 0xE0, align 8
    float32 m_flArmingSpeed; // offset 0x12A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flNonArmingSpeed; // offset 0x12A4, size 0x4, align 4
};
