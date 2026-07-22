#pragma once

class CCitadel_Modifier_AnimalCurseVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    ModelChange_t m_CursedModel; // offset 0x750, size 0xE8, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x838, size 0xE0, align 8
    float32 m_flModelScale; // offset 0x918, size 0x4, align 4 | MPropertyStartGroup
    char _pad_091C[0x4]; // offset 0x91C
};
