#pragma once

class C_CSGameRulesProxy : public C_GameRulesProxy /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    C_CSGameRules* m_pGameRules; // offset 0x600, size 0x8, align 8
};
