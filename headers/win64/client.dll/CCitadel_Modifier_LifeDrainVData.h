#pragma once

class CCitadel_Modifier_LifeDrainVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
};
