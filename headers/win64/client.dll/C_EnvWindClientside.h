#pragma once

class C_EnvWindClientside : public C_BaseEntity /*0x0*/  // sizeof 0x6F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    C_EnvWindShared m_EnvWindShared; // offset 0x600, size 0xF8, align 8 | MNotSaved
};
