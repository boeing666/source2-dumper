#pragma once

class C_ItemCrate : public C_PhysicsProp /*0x0*/  // sizeof 0xF90, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF80]; // offset 0x0
    int32 m_eLootType; // offset 0xF80, size 0x4, align 4
    char _pad_0F84[0xC]; // offset 0xF84
};
