#pragma once

class C_BaseDoor : public C_BaseToggle /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    bool m_bIsUsable; // offset 0x1098, size 0x1, align 1 | MNotSaved
    char _pad_1099[0x7]; // offset 0x1099
};
