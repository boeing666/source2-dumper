#pragma once

class CFuncNavBlocker : public CBaseModelEntity /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    bool m_bDisabled; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x3]; // offset 0x861
    int32 m_nBlockedTeamNumber; // offset 0x864, size 0x4, align 4
    char _pad_0868[0x8]; // offset 0x868
};
