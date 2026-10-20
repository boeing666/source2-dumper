#pragma once

class CCitadel_Ability_Werewolf_Leap : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x24D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bWillLeapOff; // offset 0x16E0, size 0x1, align 1
    bool m_bIsLeaping; // offset 0x16E1, size 0x1, align 1
    char _pad_16E2[0x2]; // offset 0x16E2
    GameTime_t m_tLeapStartTime; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_tLeapOffTime; // offset 0x16E8, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0x16EC, size 0xC, align 4
    Vector m_vLaunchVelocity; // offset 0x16F8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x1704, size 0xC, align 4
    char _pad_1710[0xDC8]; // offset 0x1710
};
