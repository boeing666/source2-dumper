#pragma once

class CCitadel_Ability_Werewolf_NetShotVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1518, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strShootSound; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x14D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // offset 0x14E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x14F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BonusDebuffModifier; // offset 0x1508, size 0x10, align 8
};
