#pragma once

class CCitadel_Ability_Werewolf_KickFlip : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1B68, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bIsLeaping; // offset 0x11D8, size 0x1, align 1 | MNetworkEnable
    char _pad_11D9[0x3]; // offset 0x11D9
    GameTime_t m_tLeapStartTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tLeapOffTime; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable
    char _pad_11E4[0x984]; // offset 0x11E4
};
