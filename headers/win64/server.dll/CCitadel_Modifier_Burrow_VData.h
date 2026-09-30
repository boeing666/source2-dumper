#pragma once

class CCitadel_Modifier_Burrow_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowPlayerParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flDesatAmount; // offset 0x840, size 0x4, align 4
    Color m_DesatTint; // offset 0x844, size 0x4, align 4
    Color m_SatTint; // offset 0x848, size 0x4, align 4
    Color m_Outline; // offset 0x84C, size 0x4, align 4
};
