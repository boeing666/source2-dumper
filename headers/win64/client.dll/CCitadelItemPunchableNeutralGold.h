#pragma once

class CCitadelItemPunchableNeutralGold : public C_CitadelItemPickup /*0x0*/  // sizeof 0xDE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDE0]; // offset 0x0
    CHandle< C_BaseEntity > m_hVictimPlayer; // offset 0xDE0, size 0x4, align 4
    char _pad_0DE4[0x4]; // offset 0xDE4
};
