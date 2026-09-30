#pragma once

class CModifierLashGrappleTargetVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA10, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LockingOnParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LockedOnParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WarningParticle; // offset 0x920, size 0xE0, align 8
    CSoundEventName m_strVictimLockonSound; // offset 0xA00, size 0x10, align 8 | MPropertyStartGroup
};
