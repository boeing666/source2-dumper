#pragma once

class CCitadel_Ability_ProximityRitual_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A20, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_PredatoryStatueModel; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatReappearParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatDisappearParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatEyesParticle; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatSummonParticle; // offset 0x1720, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatRecallParticle; // offset 0x1800, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RecallLineParticle; // offset 0x18E0, size 0xE0, align 8
    CSoundEventName m_strRecallSound; // offset 0x19C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strKilledSound; // offset 0x19D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PredatoryStatueModifier; // offset 0x19E0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RecentDamageModifier; // offset 0x19F0, size 0x10, align 8
    float32 m_flHeavyMeleeDmg; // offset 0x1A00, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLightMeleeDmg; // offset 0x1A04, size 0x4, align 4
    float32 m_flAbilityDamageScale; // offset 0x1A08, size 0x4, align 4
    float32 m_flNPCDamageScale; // offset 0x1A0C, size 0x4, align 4
    float32 m_flCastDelayMin; // offset 0x1A10, size 0x4, align 4
    float32 m_flCastDelayMax; // offset 0x1A14, size 0x4, align 4
    float32 m_flCastDelayMaxDist; // offset 0x1A18, size 0x4, align 4
    float32 m_flPostCastCooldown; // offset 0x1A1C, size 0x4, align 4
};
