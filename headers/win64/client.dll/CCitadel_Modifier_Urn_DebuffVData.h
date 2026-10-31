#pragma once

class CCitadel_Modifier_Urn_DebuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EntangleModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strEntangleCounter; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strEntangleSound; // offset 0x888, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strEntangleBuildupSound; // offset 0x898, size 0x10, align 8
};
