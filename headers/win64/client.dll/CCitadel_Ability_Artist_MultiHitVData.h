#pragma once

class CCitadel_Ability_Artist_MultiHitVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x11A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x1160, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1170, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1180, size 0x10, align 8
    CSoundEventName m_ExplodeSound; // offset 0x1190, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flRandomVarianceInDirection; // offset 0x11A0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_11A4[0x4]; // offset 0x11A4
};
