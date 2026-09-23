#pragma once

class CItemDefuser : public CItem /*0x0*/  // sizeof 0xB00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    EntitySpottedState_t m_entitySpottedState; // offset 0xAE0, size 0x18, align 255
    int32 m_nSpotRules; // offset 0xAF8, size 0x4, align 4
    char _pad_0AFC[0x4]; // offset 0xAFC
};
