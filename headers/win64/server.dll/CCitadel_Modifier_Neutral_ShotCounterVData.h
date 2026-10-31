#pragma once

class CCitadel_Modifier_Neutral_ShotCounterVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CoreParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    int32 m_nStartingBookCount; // offset 0x878, size 0x4, align 4 | MPropertyDescription
    char _pad_087C[0x4]; // offset 0x87C
};
