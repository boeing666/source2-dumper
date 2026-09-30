#pragma once

class CCitadel_Modifier_SpilledBloodThinkerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpilledBloodParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flTickRate; // offset 0x840, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHeight; // offset 0x844, size 0x4, align 4
};
