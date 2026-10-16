#pragma once

class CCitadel_Ability_Artist_CloudburstVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1620, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ZapModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ProjectileArmedModifier; // offset 0x1418, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x1428, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProjectileLoopingSound; // offset 0x1438, size 0x10, align 8
    CSoundEventName m_strExplosionSound; // offset 0x1448, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1458, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1538, size 0xE0, align 8
    float32 m_flArmingSpeed; // offset 0x1618, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flNonArmingSpeed; // offset 0x161C, size 0x4, align 4
};
