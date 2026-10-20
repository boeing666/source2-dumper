#pragma once

class CCitadel_Ability_Tier2Boss_AoEWaveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1268, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x1150, size 0xE0, align 8
    CSoundEventName m_strAOEImpactSound; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAOEAnnounceSound; // offset 0x1240, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AoEModifier; // offset 0x1250, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flCastCompleteToAttackTime; // offset 0x1260, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1264[0x4]; // offset 0x1264
};
