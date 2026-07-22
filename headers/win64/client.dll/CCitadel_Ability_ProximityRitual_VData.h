#pragma once

class CCitadel_Ability_ProximityRitual_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1E98, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_PredatoryStatueModel; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatReappearParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatDisappearParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatEyesParticle; // offset 0x1AB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatSummonParticle; // offset 0x1B98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatRecallParticle; // offset 0x1C78, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RecallLineParticle; // offset 0x1D58, size 0xE0, align 8
    CSoundEventName m_strRecallSound; // offset 0x1E38, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strKilledSound; // offset 0x1E48, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PredatoryStatueModifier; // offset 0x1E58, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RecentDamageModifier; // offset 0x1E68, size 0x10, align 8
    float32 m_flHeavyMeleeDmg; // offset 0x1E78, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLightMeleeDmg; // offset 0x1E7C, size 0x4, align 4
    float32 m_flAbilityDamageScale; // offset 0x1E80, size 0x4, align 4
    float32 m_flNPCDamageScale; // offset 0x1E84, size 0x4, align 4
    float32 m_flCastDelayMin; // offset 0x1E88, size 0x4, align 4
    float32 m_flCastDelayMax; // offset 0x1E8C, size 0x4, align 4
    float32 m_flCastDelayMaxDist; // offset 0x1E90, size 0x4, align 4
    float32 m_flPostCastCooldown; // offset 0x1E94, size 0x4, align 4
};
