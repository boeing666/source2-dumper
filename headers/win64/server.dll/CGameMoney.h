#pragma once

class CGameMoney : public CRulePointEntity /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CEntityIOOutput m_OnMoneySpent; // offset 0x780, size 0x18, align 255
    CEntityIOOutput m_OnMoneySpentFail; // offset 0x798, size 0x18, align 255
    int32 m_nMoney; // offset 0x7B0, size 0x4, align 4
    char _pad_07B4[0x4]; // offset 0x7B4
    CUtlString m_strAwardText; // offset 0x7B8, size 0x8, align 8
};
