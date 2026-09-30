#pragma once

class CCitadel_Modifier_MageWalkVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA18, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x920, size 0xE0, align 8
    float32 m_flPreTeleportDuration; // offset 0xA00, size 0x4, align 4 | MPropertyGroupName
    char _pad_0A04[0x4]; // offset 0xA04
    CSoundEventName m_strAmbientLoopingLocalPlayerSound; // offset 0xA08, size 0x10, align 8 | MPropertyGroupName
};
