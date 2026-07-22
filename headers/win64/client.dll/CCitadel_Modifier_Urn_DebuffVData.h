#pragma once

class CCitadel_Modifier_Urn_DebuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EntangleModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strEntangleCounter; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strEntangleSound; // offset 0x840, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strEntangleBuildupSound; // offset 0x850, size 0x10, align 8
};
