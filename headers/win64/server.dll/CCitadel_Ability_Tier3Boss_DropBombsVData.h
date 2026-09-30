#pragma once

class CCitadel_Ability_Tier3Boss_DropBombsVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1998, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberAoeWarningParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberAoeWarningGroundParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphExplodeParticle; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphAoeWarningParticle; // offset 0x1720, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphAoeWarningGroundParticle; // offset 0x1800, size 0xE0, align 8
    CSoundEventName m_AmberAOEWarningSound; // offset 0x18E0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AmberAOEImpactSound; // offset 0x18F0, size 0x10, align 8
    CSoundEventName m_SapphireAOEWarningSound; // offset 0x1900, size 0x10, align 8
    CSoundEventName m_SapphireAOEImpactSound; // offset 0x1910, size 0x10, align 8
    CSoundEventName m_strLaunchSound; // offset 0x1920, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLandSound; // offset 0x1930, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1940, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // offset 0x1950, size 0x10, align 8 | MPropertyGroupName
    float32 m_flExplodeRadius; // offset 0x1960, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBombOffsets; // offset 0x1964, size 0x4, align 4
    float32 m_flBaseDamage; // offset 0x1968, size 0x4, align 4
    float32 m_flDamageNonPlayer; // offset 0x196C, size 0x4, align 4
    float32 m_flMaxHealthPctDamage; // offset 0x1970, size 0x4, align 4
    float32 m_flDebuffDuration; // offset 0x1974, size 0x4, align 4
    float32 m_flCooldownMax; // offset 0x1978, size 0x4, align 4
    float32 m_flCooldownMin; // offset 0x197C, size 0x4, align 4
    float32 m_flDetonationTimeMax; // offset 0x1980, size 0x4, align 4
    float32 m_flDetonationTimeMin; // offset 0x1984, size 0x4, align 4
    float32 m_flBossHealthMax; // offset 0x1988, size 0x4, align 4
    float32 m_flBossHealthMin; // offset 0x198C, size 0x4, align 4
    float32 m_flBombDropDist; // offset 0x1990, size 0x4, align 4
    float32 m_flWarningOffset; // offset 0x1994, size 0x4, align 4
};
