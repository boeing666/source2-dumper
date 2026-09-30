#pragma once

class CModifierPowerGeneratorVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberEffectToTitan; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphEffectToTitan; // offset 0x840, size 0xE0, align 8
};
