#pragma once

class CCitadel_Modifier_CorpseExplosionThinkerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WarningParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x830, size 0xE0, align 8
    float32 m_flTickRate; // offset 0x910, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0914[0x4]; // offset 0x914
};
