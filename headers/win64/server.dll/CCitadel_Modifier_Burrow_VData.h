#pragma once

class CCitadel_Modifier_Burrow_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowPlayerParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flDesatAmount; // offset 0x870, size 0x4, align 4
    Color m_DesatTint; // offset 0x874, size 0x4, align 4
    Color m_SatTint; // offset 0x878, size 0x4, align 4
    Color m_Outline; // offset 0x87C, size 0x4, align 4
};
