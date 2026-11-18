#pragma once

class C_BaseDoor : public C_BaseToggle /*0x0*/  // sizeof 0xD70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    bool m_bIsUsable; // offset 0xD68, size 0x1, align 1 | MNotSaved
    char _pad_0D69[0x7]; // offset 0xD69
};
