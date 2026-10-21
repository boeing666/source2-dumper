#pragma once

class CCitadel_Ability_Doorman_Doorway : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1708, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14D8]; // offset 0x0
    CHandle< CCitadel_DoorwayPortal > m_hDoor1; // offset 0x14D8, size 0x4, align 4
    char _pad_14DC[0x4]; // offset 0x14DC
    float64 m_flLastRangeFailCast; // offset 0x14E0, size 0x8, align 8
    char _pad_14E8[0x210]; // offset 0x14E8
    float32 m_flDoorBreakableRadius; // offset 0x16F8, size 0x4, align 4
    char _pad_16FC[0x4]; // offset 0x16FC
    float32 m_flDebugDrawDuration; // offset 0x1700, size 0x4, align 4
    char _pad_1704[0x4]; // offset 0x1704
};
