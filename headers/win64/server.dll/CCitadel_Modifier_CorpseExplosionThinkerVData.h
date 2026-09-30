#pragma once

class CCitadel_Modifier_CorpseExplosionThinkerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x928, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WarningParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x840, size 0xE0, align 8
    float32 m_flTickRate; // offset 0x920, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0924[0x4]; // offset 0x924
};
