#pragma once

class CCitadel_Ability_Doorman_Doorway : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1428, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x1208]; // offset 0x0
    CHandle< CCitadel_DoorwayPortal > m_hDoor1; // offset 0x1208, size 0x4, align 4 | MNetworkEnable
    char _pad_120C[0x4]; // offset 0x120C
    float64 m_flLastRangeFailCast; // offset 0x1210, size 0x8, align 8
    char _pad_1218[0x200]; // offset 0x1218
    float32 m_flDoorBreakableRadius; // offset 0x1418, size 0x4, align 4
    char _pad_141C[0x4]; // offset 0x141C
    SatVolumeIndex_t m_nDoorPlacementSphere; // offset 0x1420, size 0x4, align 255
    char _pad_1424[0x4]; // offset 0x1424
};
