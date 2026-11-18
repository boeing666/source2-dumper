#pragma once

class CDOTA_BaseNPC_HallofFame : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1B70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B50]; // offset 0x0
    int32 m_event_dota_player_team_changed; // offset 0x1B50, size 0x4, align 4
    char _pad_1B54[0x4]; // offset 0x1B54
    CountdownTimer m_glowThinkTimer; // offset 0x1B58, size 0x18, align 8
};
