#pragma once

class CCitadel_Ability_Doorman_Doorway : public CCitadelBaseAbility /*0x0*/  // sizeof 0x11B8, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xFA0]; // offset 0x0
    CHandle< CCitadel_DoorwayPortal > m_hDoor1; // offset 0xFA0, size 0x4, align 4 | MNetworkEnable
    char _pad_0FA4[0x4]; // offset 0xFA4
    float64 m_flLastRangeFailCast; // offset 0xFA8, size 0x8, align 8
    char _pad_0FB0[0x200]; // offset 0xFB0
    float32 m_flDoorBreakableRadius; // offset 0x11B0, size 0x4, align 4
    char _pad_11B4[0x4]; // offset 0x11B4
};
