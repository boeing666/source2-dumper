#pragma once

class CPointClientUIDialog : public CBaseClientUIEntity /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    CHandle< CBaseEntity > m_hActivator; // offset 0x8D8, size 0x4, align 4
    bool m_bStartEnabled; // offset 0x8DC, size 0x1, align 1
    char _pad_08DD[0x3]; // offset 0x8DD
};
