#pragma once

class CCitadel_Modifier_Tokamak_HeatSinks_DOT_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sAfterburnParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sAfterburnExplodeParticle; // offset 0x830, size 0xE0, align 8
};
