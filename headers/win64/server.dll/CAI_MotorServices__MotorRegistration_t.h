#pragma once

struct CAI_MotorServices::MotorRegistration_t  // sizeof 0x20, align 0x8 (server) {MGetKV3ClassDefaults}
{
    std::unique_ptr< IAI_Motor > m_pMotor; // offset 0x0, size 0x8, align 8
    CUtlVector< NavType_t > m_navTypes; // offset 0x8, size 0x18, align 8
};
