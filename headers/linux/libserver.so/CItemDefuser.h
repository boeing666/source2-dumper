#pragma once

class CItemDefuser : public CItem /*0x0*/  // sizeof 0xD00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xCD8]; // offset 0x0
    EntitySpottedState_t m_entitySpottedState; // offset 0xCD8, size 0x18, align 255
    int32 m_nSpotRules; // offset 0xCF0, size 0x4, align 4
    char _pad_0CF4[0xC]; // offset 0xCF4
};
