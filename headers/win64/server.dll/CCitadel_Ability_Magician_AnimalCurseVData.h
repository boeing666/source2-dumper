#pragma once

class CCitadel_Ability_Magician_AnimalCurseVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AirDampingModifier; // offset 0x13F8, size 0x10, align 8
    CSoundEventName m_TargetWarningSound; // offset 0x1408, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ProjectileHitConfirm; // offset 0x1418, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileImpactParticle; // offset 0x1428, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetWarningParticle; // offset 0x1508, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileExplodeParticle; // offset 0x15E8, size 0xE0, align 8
};
