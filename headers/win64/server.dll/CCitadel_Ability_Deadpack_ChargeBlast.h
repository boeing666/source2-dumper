#pragma once

class CCitadel_Ability_Deadpack_ChargeBlast : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1DE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14C8]; // offset 0x0
    VectorWS m_vStartPoint; // offset 0x14C8, size 0xC, align 4
    VectorWS m_vEndPoint; // offset 0x14D4, size 0xC, align 4
    Vector m_vAimOffset; // offset 0x14E0, size 0xC, align 4
    GameTime_t m_tLaunchHeldBeginTime; // offset 0x14EC, size 0x4, align 255
    bool m_bTargetingActive; // offset 0x14F0, size 0x1, align 1
    char _pad_14F1[0x8F7]; // offset 0x14F1
};
