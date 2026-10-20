#pragma once

class CCitadel_Ability_Werewolf_NetShotVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x11A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strShootSound; // offset 0x1150, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1160, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // offset 0x1170, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1180, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BonusDebuffModifier; // offset 0x1190, size 0x10, align 8
};
