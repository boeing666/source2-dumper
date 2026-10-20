#pragma once

class CCitadel_Ability_Artist_MultiHitVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1198, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x1150, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1160, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1170, size 0x10, align 8
    CSoundEventName m_ExplodeSound; // offset 0x1180, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flRandomVarianceInDirection; // offset 0x1190, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1194[0x4]; // offset 0x1194
};
