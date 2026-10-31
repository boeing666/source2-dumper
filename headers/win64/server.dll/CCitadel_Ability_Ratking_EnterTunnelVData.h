#pragma once

class CCitadel_Ability_Ratking_EnterTunnelVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    Vector m_vTeleportOffset; // offset 0x1080, size 0xC, align 4 | MPropertyStartGroup
    Vector m_vStartingOffset; // offset 0x108C, size 0xC, align 4
    float32 m_flMinPushIntoWallDot; // offset 0x1098, size 0x4, align 4
    float32 m_flUninterruptableAfter; // offset 0x109C, size 0x4, align 4
    float32 m_flMoveIntoPositionSpringStrength; // offset 0x10A0, size 0x4, align 4
    char _pad_10A4[0x4]; // offset 0x10A4
};
