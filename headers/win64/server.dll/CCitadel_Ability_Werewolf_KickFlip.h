#pragma once

class CCitadel_Ability_Werewolf_KickFlip : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1900, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bIsLeaping; // offset 0xF70, size 0x1, align 1 | MNetworkEnable
    char _pad_0F71[0x3]; // offset 0xF71
    GameTime_t m_tLeapStartTime; // offset 0xF74, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tLeapOffTime; // offset 0xF78, size 0x4, align 255 | MNetworkEnable
    char _pad_0F7C[0x984]; // offset 0xF7C
};
