#pragma once

struct CAI_MotorServices::MovementGaitRequest_t  // sizeof 0x10, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    SharedMovementGait_t m_eMovementGait; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x3]; // offset 0x1
    float32 m_flSpeed; // offset 0x4, size 0x4, align 4
    GameTime_t m_flEndTime; // offset 0x8, size 0x4, align 255
    WorldGroupId_t m_nWorldGroupId; // offset 0xC, size 0x4, align 4
};
