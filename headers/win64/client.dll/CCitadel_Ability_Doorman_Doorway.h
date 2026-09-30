#pragma once

class CCitadel_Ability_Doorman_Doorway : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1938, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1708]; // offset 0x0
    CHandle< CCitadel_DoorwayPortal > m_hDoor1; // offset 0x1708, size 0x4, align 4
    char _pad_170C[0x4]; // offset 0x170C
    float64 m_flLastRangeFailCast; // offset 0x1710, size 0x8, align 8
    char _pad_1718[0x210]; // offset 0x1718
    float32 m_flDoorBreakableRadius; // offset 0x1928, size 0x4, align 4
    char _pad_192C[0x4]; // offset 0x192C
    SatVolumeIndex_t m_nDoorPlacementSphere; // offset 0x1930, size 0x4, align 255
    char _pad_1934[0x4]; // offset 0x1934
};
