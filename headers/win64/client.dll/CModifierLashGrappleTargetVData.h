#pragma once

class CModifierLashGrappleTargetVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA00, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LockingOnParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LockedOnParticle; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WarningParticle; // offset 0x910, size 0xE0, align 8
    CSoundEventName m_strVictimLockonSound; // offset 0x9F0, size 0x10, align 8 | MPropertyStartGroup
};
