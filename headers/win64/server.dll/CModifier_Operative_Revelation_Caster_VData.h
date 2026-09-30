#pragma once

class CModifier_Operative_Revelation_Caster_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // offset 0x760, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // offset 0x770, size 0xE0, align 8 | MPropertyStartGroup
};
