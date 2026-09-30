#pragma once

class CCitadel_Ability_Werewolf_KickFlip : public CCitadelBaseAbility /*0x0*/  // sizeof 0x21C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    bool m_bIsLeaping; // offset 0x14A0, size 0x1, align 1
    char _pad_14A1[0x3]; // offset 0x14A1
    GameTime_t m_tLeapStartTime; // offset 0x14A4, size 0x4, align 255
    GameTime_t m_tLeapOffTime; // offset 0x14A8, size 0x4, align 255
    char _pad_14AC[0xD14]; // offset 0x14AC
};
