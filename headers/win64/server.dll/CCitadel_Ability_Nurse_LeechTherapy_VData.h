#pragma once

class CCitadel_Ability_Nurse_LeechTherapy_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1360, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeechTargetParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MissedJarImpactParticle; // offset 0x1230, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1310, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PickupBonusModifier; // offset 0x1320, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AllyModifier; // offset 0x1330, size 0x10, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1340, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strMissedDissolveSound; // offset 0x1350, size 0x10, align 8
};
