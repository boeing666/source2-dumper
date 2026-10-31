#pragma once

class CCitadel_Ability_VampireBat_LoveBitesVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1190, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DamageProcModifier; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strAttackerHitSound; // offset 0x1180, size 0x10, align 8 | MPropertyStartGroup
};
