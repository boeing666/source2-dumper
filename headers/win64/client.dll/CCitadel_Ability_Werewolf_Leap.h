#pragma once

class CCitadel_Ability_Werewolf_Leap : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x24D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bWillLeapOff; // offset 0x16D8, size 0x1, align 1
    bool m_bIsLeaping; // offset 0x16D9, size 0x1, align 1
    char _pad_16DA[0x2]; // offset 0x16DA
    GameTime_t m_tLeapStartTime; // offset 0x16DC, size 0x4, align 255
    GameTime_t m_tLeapOffTime; // offset 0x16E0, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0x16E4, size 0xC, align 4
    Vector m_vLaunchVelocity; // offset 0x16F0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16FC, size 0xC, align 4
    char _pad_1708[0xDC8]; // offset 0x1708
};
