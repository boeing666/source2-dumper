#pragma once

struct GameChatLogEntry_t  // sizeof 0x18, align 0xFF (server)
{
    int32 m_nTeam; // offset 0x0, size 0x4, align 4
    PlayerID_t m_nPlayerID; // offset 0x4, size 0x4, align 255
    CUtlString m_sText; // offset 0x8, size 0x8, align 8
    GameTime_t m_flGameTime; // offset 0x10, size 0x4, align 255
    char _pad_0014[0x4]; // offset 0x14
};
