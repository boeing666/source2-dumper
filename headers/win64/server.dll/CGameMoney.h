#pragma once

class CGameMoney : public CRulePointEntity /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CEntityIOOutput m_OnMoneySpent; // offset 0x860, size 0x18, align 255
    CEntityIOOutput m_OnMoneySpentFail; // offset 0x878, size 0x18, align 255
    int32 m_nMoney; // offset 0x890, size 0x4, align 4
    char _pad_0894[0x4]; // offset 0x894
    CUtlString m_strAwardText; // offset 0x898, size 0x8, align 8
};
