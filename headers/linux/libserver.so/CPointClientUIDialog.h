#pragma once

class CPointClientUIDialog : public CBaseClientUIEntity /*0x0*/  // sizeof 0xBB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CHandle< CBaseEntity > m_hActivator; // offset 0xBB0, size 0x4, align 4
    bool m_bStartEnabled; // offset 0xBB4, size 0x1, align 1
    char _pad_0BB5[0x3]; // offset 0xBB5
};
