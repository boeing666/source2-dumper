#pragma once

class CCitadel_Modifier_DragonFireGroundAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7A8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flHeight; // offset 0x888, size 0x4, align 4 | MPropertyStartGroup
    char _pad_088C[0x4]; // offset 0x88C
};
