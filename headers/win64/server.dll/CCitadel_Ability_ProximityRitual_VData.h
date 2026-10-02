#pragma once

class CCitadel_Ability_ProximityRitual_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A68, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_PredatoryStatueModel; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatReappearParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatDisappearParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatEyesParticle; // offset 0x1688, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatSummonParticle; // offset 0x1768, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatRecallParticle; // offset 0x1848, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RecallLineParticle; // offset 0x1928, size 0xE0, align 8
    CSoundEventName m_strRecallSound; // offset 0x1A08, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strKilledSound; // offset 0x1A18, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PredatoryStatueModifier; // offset 0x1A28, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RecentDamageModifier; // offset 0x1A38, size 0x10, align 8
    float32 m_flHeavyMeleeDmg; // offset 0x1A48, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLightMeleeDmg; // offset 0x1A4C, size 0x4, align 4
    float32 m_flAbilityDamageScale; // offset 0x1A50, size 0x4, align 4
    float32 m_flNPCDamageScale; // offset 0x1A54, size 0x4, align 4
    float32 m_flCastDelayMin; // offset 0x1A58, size 0x4, align 4
    float32 m_flCastDelayMax; // offset 0x1A5C, size 0x4, align 4
    float32 m_flCastDelayMaxDist; // offset 0x1A60, size 0x4, align 4
    float32 m_flPostCastCooldown; // offset 0x1A64, size 0x4, align 4
};
