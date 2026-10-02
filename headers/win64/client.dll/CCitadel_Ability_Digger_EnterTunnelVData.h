#pragma once

class CCitadel_Ability_Digger_EnterTunnelVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    Vector m_vTeleportOffset; // offset 0x13E8, size 0xC, align 4 | MPropertyStartGroup
    Vector m_vStartingOffset; // offset 0x13F4, size 0xC, align 4
    float32 m_flMinPushIntoWallDot; // offset 0x1400, size 0x4, align 4
    float32 m_flUninterruptableAfter; // offset 0x1404, size 0x4, align 4
    float32 m_flMoveIntoPositionSpringStrength; // offset 0x1408, size 0x4, align 4
    char _pad_140C[0x4]; // offset 0x140C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnterParticle; // offset 0x1410, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExitParticle; // offset 0x14F0, size 0xE0, align 8
    CSoundEventName m_StartTunnelSound; // offset 0x15D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ExitTunnelSound; // offset 0x15E0, size 0x10, align 8
};
