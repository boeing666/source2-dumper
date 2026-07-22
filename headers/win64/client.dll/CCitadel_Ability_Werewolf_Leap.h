#pragma once

class CCitadel_Ability_Werewolf_Leap : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C10, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bWillLeapOff; // offset 0x11D8, size 0x1, align 1 | MNetworkEnable
    bool m_bIsLeaping; // offset 0x11D9, size 0x1, align 1 | MNetworkEnable
    char _pad_11DA[0x2]; // offset 0x11DA
    GameTime_t m_tLeapStartTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tLeapOffTime; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable
    VectorWS m_vLaunchPosition; // offset 0x11E4, size 0xC, align 4
    VectorWS m_vLaunchVelocity; // offset 0x11F0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x11FC, size 0xC, align 4
    char _pad_1208[0xA08]; // offset 0x1208
};
