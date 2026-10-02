#pragma once

class CCitadelItemPunchableNeutralGold : public C_CitadelItemPickup /*0x0*/  // sizeof 0xE40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE38]; // offset 0x0
    CHandle< C_BaseEntity > m_hVictimPlayer; // offset 0xE38, size 0x4, align 4
    char _pad_0E3C[0x4]; // offset 0xE3C
};
