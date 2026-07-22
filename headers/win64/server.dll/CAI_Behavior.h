#pragma once

class CAI_Behavior : public CAI_Component /*0x0*/  // sizeof 0x58, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    bool m_bActive; // offset 0x50, size 0x1, align 1
    bool m_bOverrode; // offset 0x51, size 0x1, align 1 | MNotSaved
    char _pad_0052[0x6]; // offset 0x52
};
