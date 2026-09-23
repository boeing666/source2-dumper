#pragma once

class CGameMoney : public CRulePointEntity /*0x0*/  // sizeof 0xB80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB40]; // offset 0x0
    CEntityIOOutput m_OnMoneySpent; // offset 0xB40, size 0x18, align 255
    CEntityIOOutput m_OnMoneySpentFail; // offset 0xB58, size 0x18, align 255
    int32 m_nMoney; // offset 0xB70, size 0x4, align 4
    char _pad_0B74[0x4]; // offset 0xB74
    CUtlString m_strAwardText; // offset 0xB78, size 0x8, align 8
};
