#pragma once

class CCitadel_Ability_HealthSwapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwapParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SilenceExplodeParticle; // offset 0x14C8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SwapModifier; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PreCastModifier; // offset 0x15B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x15C8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x15D8, size 0x10, align 8
};
