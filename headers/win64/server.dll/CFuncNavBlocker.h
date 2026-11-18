#pragma once

class CFuncNavBlocker : public CBaseModelEntity /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8C0]; // offset 0x0
    bool m_bDisabled; // offset 0x8C0, size 0x1, align 1
    char _pad_08C1[0x3]; // offset 0x8C1
    int32 m_nBlockedTeamNumber; // offset 0x8C4, size 0x4, align 4
    char _pad_08C8[0x8]; // offset 0x8C8
};
