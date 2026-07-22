#pragma once

class CCitadel_Ability_Gunslinger_KnockbackBlastVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x19F8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x18F8, size 0xE0, align 8
    CSoundEventName m_strWallSlamSound; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x19E8, size 0x10, align 8 | MPropertyStartGroup
};
