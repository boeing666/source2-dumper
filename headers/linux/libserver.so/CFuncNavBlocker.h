#pragma once

class CFuncNavBlocker : public CBaseModelEntity /*0x0*/  // sizeof 0xA68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    bool m_bDisabled; // offset 0xA58, size 0x1, align 1
    char _pad_0A59[0x3]; // offset 0xA59
    int32 m_nBlockedTeamNumber; // offset 0xA5C, size 0x4, align 4
    char _pad_0A60[0x8]; // offset 0xA60
};
