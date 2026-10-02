#pragma once

class CCitadel_Modifier_Familiar_SpotlightAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x7E8, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flHeight; // offset 0x8C8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOffset; // offset 0x8CC, size 0x4, align 4
};
