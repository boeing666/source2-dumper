#pragma once

class CDOTA_BaseNPC_HallofFame : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1CC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1CA4]; // offset 0x0
    int32 m_event_dota_player_team_changed; // offset 0x1CA4, size 0x4, align 4
    CountdownTimer m_glowThinkTimer; // offset 0x1CA8, size 0x18, align 8
};
