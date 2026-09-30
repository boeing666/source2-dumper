#pragma once

class CCitadel_Modifier_AnimalCurseVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    ModelChange_t m_CursedModel; // offset 0x760, size 0xE8, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x848, size 0xE0, align 8
    float32 m_flModelScale; // offset 0x928, size 0x4, align 4 | MPropertyStartGroup
    char _pad_092C[0x4]; // offset 0x92C
};
