#pragma once

class CDotaSubquestPlayerStat : public CDotaSubquestBase /*0x0*/  // sizeof 0x9D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9CC]; // offset 0x0
    subquest_player_stat_types_t m_ePlayerStatType; // offset 0x9CC, size 0x4, align 4
    int32 m_nPlayerStatValue; // offset 0x9D0, size 0x4, align 4
    int32 m_nStartingStatOffset; // offset 0x9D4, size 0x4, align 4
};
