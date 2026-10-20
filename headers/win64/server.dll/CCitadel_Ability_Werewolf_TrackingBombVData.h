#pragma once

class CCitadel_Ability_Werewolf_TrackingBombVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1180, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1150, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_VialDebuffModifier; // offset 0x1160, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HowlDebuffModifier; // offset 0x1170, size 0x10, align 8
};
