#pragma once

class CCitadel_Modifier_SpilledBloodThinkerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpilledBloodParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flTickRate; // offset 0x830, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHeight; // offset 0x834, size 0x4, align 4
};
