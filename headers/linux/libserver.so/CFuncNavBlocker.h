#pragma once

class CFuncNavBlocker : public CBaseModelEntity /*0x0*/  // sizeof 0xBB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA8]; // offset 0x0
    bool m_bDisabled; // offset 0xBA8, size 0x1, align 1
    char _pad_0BA9[0x3]; // offset 0xBA9
    int32 m_nBlockedTeamNumber; // offset 0xBAC, size 0x4, align 4
    char _pad_0BB0[0x8]; // offset 0xBB0
};
