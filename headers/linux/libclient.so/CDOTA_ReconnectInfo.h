#pragma once

class CDOTA_ReconnectInfo  // sizeof 0x18, align 0xFF [trivial_dtor] (client)
{
public:
    uint64 m_playerSteamId; // offset 0x0, size 0x8, align 8
    int32 m_iTeam; // offset 0x8, size 0x4, align 4
    CEntityIndex m_iUnitControlled; // offset 0xC, size 0x4, align 4
    bool m_bWantsRandomHero; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
};
