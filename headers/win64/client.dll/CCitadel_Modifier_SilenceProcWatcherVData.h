#pragma once

class CCitadel_Modifier_SilenceProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x780, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TechDamageReductionModifier; // offset 0x790, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x7A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // offset 0x7B0, size 0x10, align 8
    CUtlString m_sInstantProcIfCasterHasModifier; // offset 0x7C0, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x7C8, size 0xE0, align 8 | MPropertyGroupName
};
