#pragma once

class CAI_NavLinkMotor : public IAI_Motor /*0x0*/  // sizeof 0x40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVector< std::unique_ptr< INavLinkSubMotor > > m_vecSubMotors; // offset 0x10, size 0x18, align 8
    int32 m_nActiveSubMotorIndex; // offset 0x28, size 0x4, align 4
    int32 m_nObstacleSubMotorCount; // offset 0x2C, size 0x4, align 4
    INavLinkSubMotor::StartType_t m_eStartType; // offset 0x30, size 0x4, align 4
    INavLinkSubMotor::ExitType_t m_eExitType; // offset 0x34, size 0x4, align 4
    bool m_bStopped; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x7]; // offset 0x39
};
