#pragma once

class INavSmartGoal  // sizeof 0x10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CHandle< CAI_BaseNPC > m_hNPC; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
