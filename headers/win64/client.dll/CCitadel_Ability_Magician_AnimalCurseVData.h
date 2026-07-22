#pragma once

class CCitadel_Ability_Magician_AnimalCurseVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AF8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AirDampingModifier; // offset 0x1828, size 0x10, align 8
    CSoundEventName m_TargetWarningSound; // offset 0x1838, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ProjectileHitConfirm; // offset 0x1848, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileImpactParticle; // offset 0x1858, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetWarningParticle; // offset 0x1938, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileExplodeParticle; // offset 0x1A18, size 0xE0, align 8
};
