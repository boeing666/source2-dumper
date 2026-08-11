#pragma once

class CCitadel_Ability_Werewolf_Leap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x19A8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bWillLeapOff; // offset 0xF70, size 0x1, align 1 | MNetworkEnable
    bool m_bIsLeaping; // offset 0xF71, size 0x1, align 1 | MNetworkEnable
    char _pad_0F72[0x2]; // offset 0xF72
    GameTime_t m_tLeapStartTime; // offset 0xF74, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tLeapOffTime; // offset 0xF78, size 0x4, align 255 | MNetworkEnable
    VectorWS m_vLaunchPosition; // offset 0xF7C, size 0xC, align 4
    VectorWS m_vLaunchVelocity; // offset 0xF88, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0xF94, size 0xC, align 4
    char _pad_0FA0[0xA08]; // offset 0xFA0
};
