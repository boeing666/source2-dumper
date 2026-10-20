#pragma once

class CCitadel_Ability_ProximityRitual_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_PredatoryStatueModel; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatReappearParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatDisappearParticle; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatEyesParticle; // offset 0x1310, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatSummonParticle; // offset 0x13F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatRecallParticle; // offset 0x14D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RecallLineParticle; // offset 0x15B0, size 0xE0, align 8
    CSoundEventName m_strRecallSound; // offset 0x1690, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strKilledSound; // offset 0x16A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PredatoryStatueModifier; // offset 0x16B0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RecentDamageModifier; // offset 0x16C0, size 0x10, align 8
    float32 m_flHeavyMeleeDmg; // offset 0x16D0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLightMeleeDmg; // offset 0x16D4, size 0x4, align 4
    float32 m_flAbilityDamageScale; // offset 0x16D8, size 0x4, align 4
    float32 m_flNPCDamageScale; // offset 0x16DC, size 0x4, align 4
    float32 m_flCastDelayMin; // offset 0x16E0, size 0x4, align 4
    float32 m_flCastDelayMax; // offset 0x16E4, size 0x4, align 4
    float32 m_flCastDelayMaxDist; // offset 0x16E8, size 0x4, align 4
    float32 m_flPostCastCooldown; // offset 0x16EC, size 0x4, align 4
};
