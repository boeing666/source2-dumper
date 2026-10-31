#pragma once

class CCitadel_Ability_Digger_EnterTunnelVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1288, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    Vector m_vTeleportOffset; // offset 0x1080, size 0xC, align 4 | MPropertyStartGroup
    Vector m_vStartingOffset; // offset 0x108C, size 0xC, align 4
    float32 m_flMinPushIntoWallDot; // offset 0x1098, size 0x4, align 4
    float32 m_flUninterruptableAfter; // offset 0x109C, size 0x4, align 4
    float32 m_flMoveIntoPositionSpringStrength; // offset 0x10A0, size 0x4, align 4
    char _pad_10A4[0x4]; // offset 0x10A4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnterParticle; // offset 0x10A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExitParticle; // offset 0x1188, size 0xE0, align 8
    CSoundEventName m_StartTunnelSound; // offset 0x1268, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ExitTunnelSound; // offset 0x1278, size 0x10, align 8
};
