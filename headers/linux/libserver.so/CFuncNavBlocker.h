#pragma once

class CFuncNavBlocker : public CBaseModelEntity /*0x0*/  // sizeof 0xB50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB40]; // offset 0x0
    bool m_bDisabled; // offset 0xB40, size 0x1, align 1
    char _pad_0B41[0x3]; // offset 0xB41
    int32 m_nBlockedTeamNumber; // offset 0xB44, size 0x4, align 4
    char _pad_0B48[0x8]; // offset 0xB48
};
