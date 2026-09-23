#pragma once

class CPointClientUIDialog : public CBaseClientUIEntity /*0x0*/  // sizeof 0xC90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC88]; // offset 0x0
    CHandle< CBaseEntity > m_hActivator; // offset 0xC88, size 0x4, align 4
    bool m_bStartEnabled; // offset 0xC8C, size 0x1, align 1
    char _pad_0C8D[0x3]; // offset 0xC8D
};
