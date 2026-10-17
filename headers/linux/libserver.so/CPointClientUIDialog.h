#pragma once

class CPointClientUIDialog : public CBaseClientUIEntity /*0x0*/  // sizeof 0xC98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC90]; // offset 0x0
    CHandle< CBaseEntity > m_hActivator; // offset 0xC90, size 0x4, align 4
    bool m_bStartEnabled; // offset 0xC94, size 0x1, align 1
    char _pad_0C95[0x3]; // offset 0xC95
};
