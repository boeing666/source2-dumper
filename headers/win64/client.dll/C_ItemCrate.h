#pragma once

class C_ItemCrate : public C_PhysicsProp /*0x0*/  // sizeof 0xF30, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF20]; // offset 0x0
    int32 m_eLootType; // offset 0xF20, size 0x4, align 4
    char _pad_0F24[0xC]; // offset 0xF24
};
