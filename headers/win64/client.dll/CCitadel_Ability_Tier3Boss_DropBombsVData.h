#pragma once

class CCitadel_Ability_Tier3Boss_DropBombsVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1668, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberAoeWarningParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberAoeWarningGroundParticle; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphExplodeParticle; // offset 0x1310, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphAoeWarningParticle; // offset 0x13F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphAoeWarningGroundParticle; // offset 0x14D0, size 0xE0, align 8
    CSoundEventName m_AmberAOEWarningSound; // offset 0x15B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AmberAOEImpactSound; // offset 0x15C0, size 0x10, align 8
    CSoundEventName m_SapphireAOEWarningSound; // offset 0x15D0, size 0x10, align 8
    CSoundEventName m_SapphireAOEImpactSound; // offset 0x15E0, size 0x10, align 8
    CSoundEventName m_strLaunchSound; // offset 0x15F0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLandSound; // offset 0x1600, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1610, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // offset 0x1620, size 0x10, align 8 | MPropertyGroupName
    float32 m_flExplodeRadius; // offset 0x1630, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBombOffsets; // offset 0x1634, size 0x4, align 4
    float32 m_flBaseDamage; // offset 0x1638, size 0x4, align 4
    float32 m_flDamageNonPlayer; // offset 0x163C, size 0x4, align 4
    float32 m_flMaxHealthPctDamage; // offset 0x1640, size 0x4, align 4
    float32 m_flDebuffDuration; // offset 0x1644, size 0x4, align 4
    float32 m_flCooldownMax; // offset 0x1648, size 0x4, align 4
    float32 m_flCooldownMin; // offset 0x164C, size 0x4, align 4
    float32 m_flDetonationTimeMax; // offset 0x1650, size 0x4, align 4
    float32 m_flDetonationTimeMin; // offset 0x1654, size 0x4, align 4
    float32 m_flBossHealthMax; // offset 0x1658, size 0x4, align 4
    float32 m_flBossHealthMin; // offset 0x165C, size 0x4, align 4
    float32 m_flBombDropDist; // offset 0x1660, size 0x4, align 4
    float32 m_flWarningOffset; // offset 0x1664, size 0x4, align 4
};
