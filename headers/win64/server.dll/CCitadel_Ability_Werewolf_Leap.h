#pragma once

class CCitadel_Ability_Werewolf_Leap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x22A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    bool m_bWillLeapOff; // offset 0x14A8, size 0x1, align 1
    bool m_bIsLeaping; // offset 0x14A9, size 0x1, align 1
    char _pad_14AA[0x2]; // offset 0x14AA
    GameTime_t m_tLeapStartTime; // offset 0x14AC, size 0x4, align 255
    GameTime_t m_tLeapOffTime; // offset 0x14B0, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0x14B4, size 0xC, align 4
    Vector m_vLaunchVelocity; // offset 0x14C0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14CC, size 0xC, align 4
    char _pad_14D8[0xDC8]; // offset 0x14D8
};
