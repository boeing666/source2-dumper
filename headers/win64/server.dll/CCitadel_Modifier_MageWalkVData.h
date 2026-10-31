#pragma once

class CCitadel_Modifier_MageWalkVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x958, size 0xE0, align 8
    float32 m_flPreTeleportDuration; // offset 0xA38, size 0x4, align 4 | MPropertyGroupName
    char _pad_0A3C[0x4]; // offset 0xA3C
    CSoundEventName m_strAmbientLoopingLocalPlayerSound; // offset 0xA40, size 0x10, align 8 | MPropertyGroupName
};
