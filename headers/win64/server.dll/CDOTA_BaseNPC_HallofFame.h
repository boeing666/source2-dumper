#pragma once

class CDOTA_BaseNPC_HallofFame : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x19E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x19C8]; // offset 0x0
    int32 m_event_dota_player_team_changed; // offset 0x19C8, size 0x4, align 4
    char _pad_19CC[0x4]; // offset 0x19CC
    CountdownTimer m_glowThinkTimer; // offset 0x19D0, size 0x18, align 8
};
