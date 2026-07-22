#pragma once

class C_BaseDoor : public C_BaseToggle /*0x0*/  // sizeof 0xF40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    bool m_bIsUsable; // offset 0xF38, size 0x1, align 1 | MNotSaved
    char _pad_0F39[0x7]; // offset 0xF39
};
