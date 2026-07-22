#pragma once

class CCSGameRulesProxy : public CGameRulesProxy /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CCSGameRules* m_pGameRules; // offset 0x4A8, size 0x8, align 8
};
