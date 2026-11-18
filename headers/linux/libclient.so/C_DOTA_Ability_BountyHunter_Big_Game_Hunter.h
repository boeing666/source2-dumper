#pragma once

class C_DOTA_Ability_BountyHunter_Big_Game_Hunter : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    PlayerID_t m_iFirstPlayer; // offset 0x828, size 0x4, align 255
    PlayerID_t m_iSecondPlayer; // offset 0x82C, size 0x4, align 255
    PlayerID_t m_iThirdPlayer; // offset 0x830, size 0x4, align 255
    char _pad_0834[0x4]; // offset 0x834
    CUtlVector< PlayerID_t > m_CurrentTopPlayers; // offset 0x838, size 0x18, align 8
    char _pad_0850[0x8]; // offset 0x850
};
