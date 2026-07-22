#pragma once

class CCitadel_Modifier_Shivas_Bracelet_WatcherVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FreezeModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ImmuneModifier; // offset 0x760, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // offset 0x770, size 0xE0, align 8 | MPropertyStartGroup
};
