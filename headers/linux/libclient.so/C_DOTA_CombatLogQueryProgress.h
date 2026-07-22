#pragma once

class C_DOTA_CombatLogQueryProgress  // sizeof 0x40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0x30, size 0x4, align 255
    int32 m_nQueryID; // offset 0x34, size 0x4, align 4
    int32 m_nQueryRank; // offset 0x38, size 0x4, align 4
    int32 m_nMultiQueryID; // offset 0x3C, size 0x4, align 4
};
