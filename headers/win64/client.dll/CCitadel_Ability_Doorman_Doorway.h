#pragma once

class CCitadel_Ability_Doorman_Doorway : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1940, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1710]; // offset 0x0
    CHandle< CCitadel_DoorwayPortal > m_hDoor1; // offset 0x1710, size 0x4, align 4
    char _pad_1714[0x4]; // offset 0x1714
    float64 m_flLastRangeFailCast; // offset 0x1718, size 0x8, align 8
    char _pad_1720[0x210]; // offset 0x1720
    float32 m_flDoorBreakableRadius; // offset 0x1930, size 0x4, align 4
    char _pad_1934[0x4]; // offset 0x1934
    SatVolumeIndex_t m_nDoorPlacementSphere; // offset 0x1938, size 0x4, align 255
    char _pad_193C[0x4]; // offset 0x193C
};
