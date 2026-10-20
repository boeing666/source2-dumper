#pragma once

class CCitadel_Ability_Artist_DamageZoneVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1180, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AreaModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_TargetWarningSound; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ProjectileHitConfirm; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
};
