#pragma once

class CCitadel_Modifier_TechDefenderShreddersProcVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TechDebuffModifier; // offset 0x780, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
};
