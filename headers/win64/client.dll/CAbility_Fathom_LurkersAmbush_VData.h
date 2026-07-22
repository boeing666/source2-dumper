#pragma once

class CAbility_Fathom_LurkersAmbush_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1938, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadel_Modifier_LurkersAmbush_Invis > m_InvisModifier; // offset 0x18F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RegenModifier; // offset 0x1908, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1918, size 0x10, align 8
    CSoundEventName m_strSwapStarted; // offset 0x1928, size 0x10, align 8 | MPropertyStartGroup
};
