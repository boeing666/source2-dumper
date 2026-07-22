#pragma once

class CBtActionParachutePositioning : public CBtNode /*0x0*/  // sizeof 0x78, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CountdownTimer m_ActionTimer; // offset 0x58, size 0x18, align 8
    char _pad_0070[0x8]; // offset 0x70
};
