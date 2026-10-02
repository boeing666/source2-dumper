#pragma once

class CCitadel_Ability_Ratking_EnterTunnelVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1410, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    Vector m_vTeleportOffset; // offset 0x13E8, size 0xC, align 4 | MPropertyStartGroup
    Vector m_vStartingOffset; // offset 0x13F4, size 0xC, align 4
    float32 m_flMinPushIntoWallDot; // offset 0x1400, size 0x4, align 4
    float32 m_flUninterruptableAfter; // offset 0x1404, size 0x4, align 4
    float32 m_flMoveIntoPositionSpringStrength; // offset 0x1408, size 0x4, align 4
    char _pad_140C[0x4]; // offset 0x140C
};
