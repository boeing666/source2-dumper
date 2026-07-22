#pragma once

class CCitadel_Modifier_Cadence_GrandFinale_BuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x840, size 0x10, align 8 | MPropertyStartGroup
};
