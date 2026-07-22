#pragma once

class CCitadel_Modifier_Burrow_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowPlayerParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flDesatAmount; // offset 0x830, size 0x4, align 4
    Color m_DesatTint; // offset 0x834, size 0x4, align 1
    Color m_SatTint; // offset 0x838, size 0x4, align 1
    Color m_Outline; // offset 0x83C, size 0x4, align 1
};
