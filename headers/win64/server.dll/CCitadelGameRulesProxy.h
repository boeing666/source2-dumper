#pragma once

class CCitadelGameRulesProxy : public CGameRulesProxy /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CCitadelGameRules* m_pGameRules; // offset 0x4B0, size 0x8, align 8
};
