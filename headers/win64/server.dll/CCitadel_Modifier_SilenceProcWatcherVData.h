#pragma once

class CCitadel_Modifier_SilenceProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7C8]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x7C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TechDamageReductionModifier; // offset 0x7D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x7E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // offset 0x7F8, size 0x10, align 8
    CUtlString m_sInstantProcIfCasterHasModifier; // offset 0x808, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x810, size 0xE0, align 8 | MPropertyGroupName
};
