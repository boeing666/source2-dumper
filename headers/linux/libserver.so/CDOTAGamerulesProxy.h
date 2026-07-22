#pragma once

class CDOTAGamerulesProxy : public CGameRulesProxy /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CDOTAGameRules* m_pGameRules; // offset 0x778, size 0x8, align 8
};
