#pragma once

class CFuncNavBlocker : public CBaseModelEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    bool m_bDisabled; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x3]; // offset 0x781
    int32 m_nBlockedTeamNumber; // offset 0x784, size 0x4, align 4
    char _pad_0788[0x8]; // offset 0x788
};
