#pragma once

class CItemDefuser : public CItem /*0x0*/  // sizeof 0xDE0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDB8]; // offset 0x0
    EntitySpottedState_t m_entitySpottedState; // offset 0xDB8, size 0x18, align 255
    int32 m_nSpotRules; // offset 0xDD0, size 0x4, align 4
    char _pad_0DD4[0xC]; // offset 0xDD4
};
