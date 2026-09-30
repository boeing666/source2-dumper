#pragma once

class CModifier_Drifter_Darkness_Target_BoundaryUnit_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strBoundaryPuffParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strAuraEnterPlayerSound; // offset 0x840, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAuraEnterNPCSound; // offset 0x850, size 0x10, align 8
};
