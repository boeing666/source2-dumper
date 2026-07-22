#pragma once

class CAbilityShivDeferDamageVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1900, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveCastParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flDeferredDamageApplicationInterval; // offset 0x18F8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_18FC[0x4]; // offset 0x18FC
};
