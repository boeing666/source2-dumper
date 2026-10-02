#pragma once

class CCitadel_Modifier_SpilledBloodThinkerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpilledBloodParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flTickRate; // offset 0x870, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHeight; // offset 0x874, size 0x4, align 4
};
