#pragma once

class CCitadel_Ability_Artist_MultiHitVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1510, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x14D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x14E8, size 0x10, align 8
    CSoundEventName m_ExplodeSound; // offset 0x14F8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flRandomVarianceInDirection; // offset 0x1508, size 0x4, align 4 | MPropertyStartGroup
    char _pad_150C[0x4]; // offset 0x150C
};
