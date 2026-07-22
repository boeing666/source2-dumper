#pragma once

class CGameMoney : public CRulePointEntity /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA60]; // offset 0x0
    CEntityIOOutput m_OnMoneySpent; // offset 0xA60, size 0x18, align 255
    CEntityIOOutput m_OnMoneySpentFail; // offset 0xA78, size 0x18, align 255
    int32 m_nMoney; // offset 0xA90, size 0x4, align 4
    char _pad_0A94[0x4]; // offset 0xA94
    CUtlString m_strAwardText; // offset 0xA98, size 0x8, align 8
};
