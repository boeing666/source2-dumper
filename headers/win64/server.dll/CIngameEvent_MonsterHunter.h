#pragma once

class CIngameEvent_MonsterHunter : public CIngameEvent_Base /*0x0*/  // sizeof 0x1B08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_dota_player_spawned_event; // offset 0x1A58, size 0x4, align 4
    char _pad_1A5C[0xAC]; // offset 0x1A5C
};
