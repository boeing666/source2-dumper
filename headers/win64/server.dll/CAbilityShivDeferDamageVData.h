#pragma once

class CAbilityShivDeferDamageVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1488, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveCastParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flDeferredDamageApplicationInterval; // offset 0x1480, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1484[0x4]; // offset 0x1484
};
