#pragma once

class CCitadelItemPunchableNeutralGold : public CCitadelItemPickup /*0x0*/  // sizeof 0x5510, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x5500]; // offset 0x0
    CHandle< CBaseEntity > m_hVictimPlayer; // offset 0x5500, size 0x4, align 4
    char _pad_5504[0xC]; // offset 0x5504
};
