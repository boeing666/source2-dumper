#pragma once

class CCitadel_Ability_VampireBat_LoveBitesVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DamageProcModifier; // offset 0x13F8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strAttackerHitSound; // offset 0x14E8, size 0x10, align 8 | MPropertyStartGroup
};
