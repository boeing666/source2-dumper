#pragma once

class CCitadel_Modifier_Familiar_SpotlightAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x7F0, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flHeight; // offset 0x8D0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOffset; // offset 0x8D4, size 0x4, align 4
};
