#pragma once

class CCitadel_Ability_Werewolf_KickFlip : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x23F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bIsLeaping; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x3]; // offset 0x16D9
    GameTime_t m_tLeapStartTime; // offset 0x16DC, size 0x4, align 255
    GameTime_t m_tLeapOffTime; // offset 0x16E0, size 0x4, align 255
    char _pad_16E4[0xD14]; // offset 0x16E4
};
