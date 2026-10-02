#pragma once

class CCitadel_Ability_Tier3Boss_DropBombsVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x19E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberAoeWarningParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberAoeWarningGroundParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphExplodeParticle; // offset 0x1688, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphAoeWarningParticle; // offset 0x1768, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphAoeWarningGroundParticle; // offset 0x1848, size 0xE0, align 8
    CSoundEventName m_AmberAOEWarningSound; // offset 0x1928, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AmberAOEImpactSound; // offset 0x1938, size 0x10, align 8
    CSoundEventName m_SapphireAOEWarningSound; // offset 0x1948, size 0x10, align 8
    CSoundEventName m_SapphireAOEImpactSound; // offset 0x1958, size 0x10, align 8
    CSoundEventName m_strLaunchSound; // offset 0x1968, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLandSound; // offset 0x1978, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1988, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // offset 0x1998, size 0x10, align 8 | MPropertyGroupName
    float32 m_flExplodeRadius; // offset 0x19A8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBombOffsets; // offset 0x19AC, size 0x4, align 4
    float32 m_flBaseDamage; // offset 0x19B0, size 0x4, align 4
    float32 m_flDamageNonPlayer; // offset 0x19B4, size 0x4, align 4
    float32 m_flMaxHealthPctDamage; // offset 0x19B8, size 0x4, align 4
    float32 m_flDebuffDuration; // offset 0x19BC, size 0x4, align 4
    float32 m_flCooldownMax; // offset 0x19C0, size 0x4, align 4
    float32 m_flCooldownMin; // offset 0x19C4, size 0x4, align 4
    float32 m_flDetonationTimeMax; // offset 0x19C8, size 0x4, align 4
    float32 m_flDetonationTimeMin; // offset 0x19CC, size 0x4, align 4
    float32 m_flBossHealthMax; // offset 0x19D0, size 0x4, align 4
    float32 m_flBossHealthMin; // offset 0x19D4, size 0x4, align 4
    float32 m_flBombDropDist; // offset 0x19D8, size 0x4, align 4
    float32 m_flWarningOffset; // offset 0x19DC, size 0x4, align 4
};
