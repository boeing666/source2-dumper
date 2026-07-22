#pragma once

class CCitadel_Ability_Tier3Boss_DropBombsVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1E10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberExplodeParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberAoeWarningParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberAoeWarningGroundParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphExplodeParticle; // offset 0x1AB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphAoeWarningParticle; // offset 0x1B98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphAoeWarningGroundParticle; // offset 0x1C78, size 0xE0, align 8
    CSoundEventName m_AmberAOEWarningSound; // offset 0x1D58, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AmberAOEImpactSound; // offset 0x1D68, size 0x10, align 8
    CSoundEventName m_SapphireAOEWarningSound; // offset 0x1D78, size 0x10, align 8
    CSoundEventName m_SapphireAOEImpactSound; // offset 0x1D88, size 0x10, align 8
    CSoundEventName m_strLaunchSound; // offset 0x1D98, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLandSound; // offset 0x1DA8, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1DB8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // offset 0x1DC8, size 0x10, align 8 | MPropertyGroupName
    float32 m_flExplodeRadius; // offset 0x1DD8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBombOffsets; // offset 0x1DDC, size 0x4, align 4
    float32 m_flBaseDamage; // offset 0x1DE0, size 0x4, align 4
    float32 m_flDamageNonPlayer; // offset 0x1DE4, size 0x4, align 4
    float32 m_flMaxHealthPctDamage; // offset 0x1DE8, size 0x4, align 4
    float32 m_flDebuffDuration; // offset 0x1DEC, size 0x4, align 4
    float32 m_flCooldownMax; // offset 0x1DF0, size 0x4, align 4
    float32 m_flCooldownMin; // offset 0x1DF4, size 0x4, align 4
    float32 m_flDetonationTimeMax; // offset 0x1DF8, size 0x4, align 4
    float32 m_flDetonationTimeMin; // offset 0x1DFC, size 0x4, align 4
    float32 m_flBossHealthMax; // offset 0x1E00, size 0x4, align 4
    float32 m_flBossHealthMin; // offset 0x1E04, size 0x4, align 4
    float32 m_flBombDropDist; // offset 0x1E08, size 0x4, align 4
    float32 m_flWarningOffset; // offset 0x1E0C, size 0x4, align 4
};
