#pragma once

class CCitadel_Ability_HealthSwapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1270, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwapParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SilenceExplodeParticle; // offset 0x1150, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SwapModifier; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PreCastModifier; // offset 0x1240, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1250, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x1260, size 0x10, align 8
};
