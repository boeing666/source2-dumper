#pragma once

class CPointClientUIDialog : public CBaseClientUIEntity /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA18]; // offset 0x0
    CHandle< CBaseEntity > m_hActivator; // offset 0xA18, size 0x4, align 4
    bool m_bStartEnabled; // offset 0xA1C, size 0x1, align 1
    char _pad_0A1D[0x3]; // offset 0xA1D
};
