#pragma once

class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent /*0x0*/  // sizeof 0x50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x40]; // offset 0x0
    int32 m_iAccount; // offset 0x40, size 0x4, align 4
    int32 m_iStartAccount; // offset 0x44, size 0x4, align 4
    int32 m_iTotalCashSpent; // offset 0x48, size 0x4, align 4
    int32 m_iCashSpentThisRound; // offset 0x4C, size 0x4, align 4
};
