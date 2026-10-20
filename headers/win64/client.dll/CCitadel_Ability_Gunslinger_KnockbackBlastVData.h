#pragma once

class CCitadel_Ability_Gunslinger_KnockbackBlastVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1250, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x1150, size 0xE0, align 8
    CSoundEventName m_strWallSlamSound; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1240, size 0x10, align 8 | MPropertyStartGroup
};
