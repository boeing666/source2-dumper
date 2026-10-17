#pragma once

class CPointClientUIDialog : public CBaseClientUIEntity /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9B8]; // offset 0x0
    CHandle< CBaseEntity > m_hActivator; // offset 0x9B8, size 0x4, align 4
    bool m_bStartEnabled; // offset 0x9BC, size 0x1, align 1
    char _pad_09BD[0x3]; // offset 0x9BD
};
