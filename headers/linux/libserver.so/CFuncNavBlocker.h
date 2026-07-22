#pragma once

class CFuncNavBlocker : public CBaseModelEntity /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA60]; // offset 0x0
    bool m_bDisabled; // offset 0xA60, size 0x1, align 1
    char _pad_0A61[0x3]; // offset 0xA61
    int32 m_nBlockedTeamNumber; // offset 0xA64, size 0x4, align 4
    char _pad_0A68[0x8]; // offset 0xA68
};
