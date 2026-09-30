#pragma once

class CCitadel_Ability_Digger_EnterTunnelVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    Vector m_vTeleportOffset; // offset 0x13A0, size 0xC, align 4 | MPropertyStartGroup
    Vector m_vStartingOffset; // offset 0x13AC, size 0xC, align 4
    float32 m_flMinPushIntoWallDot; // offset 0x13B8, size 0x4, align 4
    float32 m_flUninterruptableAfter; // offset 0x13BC, size 0x4, align 4
    float32 m_flMoveIntoPositionSpringStrength; // offset 0x13C0, size 0x4, align 4
    char _pad_13C4[0x4]; // offset 0x13C4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnterParticle; // offset 0x13C8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExitParticle; // offset 0x14A8, size 0xE0, align 8
    CSoundEventName m_StartTunnelSound; // offset 0x1588, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ExitTunnelSound; // offset 0x1598, size 0x10, align 8
};
