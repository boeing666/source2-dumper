#pragma once

class CDOTA_Ability_BountyHunter_Big_Game_Hunter : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    PlayerID_t m_iFirstPlayer; // offset 0x85C, size 0x4, align 255
    PlayerID_t m_iSecondPlayer; // offset 0x860, size 0x4, align 255
    PlayerID_t m_iThirdPlayer; // offset 0x864, size 0x4, align 255
    CUtlVector< PlayerID_t > m_CurrentTopPlayers; // offset 0x868, size 0x18, align 8
};
