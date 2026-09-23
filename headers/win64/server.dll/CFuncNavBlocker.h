#pragma once

class CFuncNavBlocker : public CBaseModelEntity /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    bool m_bDisabled; // offset 0x858, size 0x1, align 1
    char _pad_0859[0x3]; // offset 0x859
    int32 m_nBlockedTeamNumber; // offset 0x85C, size 0x4, align 4
    char _pad_0860[0x8]; // offset 0x860
};
