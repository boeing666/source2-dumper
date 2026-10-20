#pragma once

class CCitadel_Ability_Deadpack_ChargeBlast : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2020, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1700]; // offset 0x0
    VectorWS m_vStartPoint; // offset 0x1700, size 0xC, align 4
    VectorWS m_vEndPoint; // offset 0x170C, size 0xC, align 4
    Vector m_vAimOffset; // offset 0x1718, size 0xC, align 4
    GameTime_t m_tLaunchHeldBeginTime; // offset 0x1724, size 0x4, align 255
    bool m_bTargetingActive; // offset 0x1728, size 0x1, align 1
    char _pad_1729[0x8F7]; // offset 0x1729
};
