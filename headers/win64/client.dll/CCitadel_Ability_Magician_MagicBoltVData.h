#pragma once

class CCitadel_Ability_Magician_MagicBoltVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TargetDebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RetargetParticle; // offset 0x14D8, size 0xE0, align 8
    CSoundEventName m_strRedirect; // offset 0x15B8, size 0x10, align 8 | MPropertyStartGroup
};
