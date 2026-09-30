#pragma once

class CFuncNavBlocker : public CBaseModelEntity /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x880]; // offset 0x0
    bool m_bDisabled; // offset 0x880, size 0x1, align 1
    char _pad_0881[0x3]; // offset 0x881
    int32 m_nBlockedTeamNumber; // offset 0x884, size 0x4, align 4
    char _pad_0888[0x8]; // offset 0x888
};
