#pragma once

class C_DOTA_Ability_BountyHunter_Big_Game_Hunter : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    PlayerID_t m_iFirstPlayer; // offset 0x6A8, size 0x4, align 255
    PlayerID_t m_iSecondPlayer; // offset 0x6AC, size 0x4, align 255
    PlayerID_t m_iThirdPlayer; // offset 0x6B0, size 0x4, align 255
    char _pad_06B4[0x4]; // offset 0x6B4
    CUtlVector< PlayerID_t > m_CurrentTopPlayers; // offset 0x6B8, size 0x18, align 8
    char _pad_06D0[0x8]; // offset 0x6D0
};
