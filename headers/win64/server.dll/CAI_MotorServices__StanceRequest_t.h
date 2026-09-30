#pragma once

struct CAI_MotorServices::StanceRequest_t  // sizeof 0xC, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    StanceType_t m_eStance; // offset 0x0, size 0x4, align 4
    GameTime_t m_flEndTime; // offset 0x4, size 0x4, align 255
    WorldGroupId_t m_nWorldGroupId; // offset 0x8, size 0x4, align 4
};
