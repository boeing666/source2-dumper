#pragma once

class CCitadel_Ability_Werewolf_KickFlip : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2400, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bIsLeaping; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    GameTime_t m_tLeapStartTime; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_tLeapOffTime; // offset 0x16E8, size 0x4, align 255
    char _pad_16EC[0xD14]; // offset 0x16EC
};
