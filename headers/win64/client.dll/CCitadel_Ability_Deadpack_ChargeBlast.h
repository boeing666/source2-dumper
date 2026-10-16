#pragma once

class CCitadel_Ability_Deadpack_ChargeBlast : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2018, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16F8]; // offset 0x0
    VectorWS m_vStartPoint; // offset 0x16F8, size 0xC, align 4
    VectorWS m_vEndPoint; // offset 0x1704, size 0xC, align 4
    Vector m_vAimOffset; // offset 0x1710, size 0xC, align 4
    GameTime_t m_tLaunchHeldBeginTime; // offset 0x171C, size 0x4, align 255
    bool m_bTargetingActive; // offset 0x1720, size 0x1, align 1
    char _pad_1721[0x8F7]; // offset 0x1721
};
