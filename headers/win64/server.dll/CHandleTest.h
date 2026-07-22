#pragma once

class CHandleTest : public CBaseEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CHandle< CBaseEntity > m_Handle; // offset 0x4A8, size 0x4, align 4
    bool m_bSendHandle; // offset 0x4AC, size 0x1, align 1
    char _pad_04AD[0x3]; // offset 0x4AD
};
