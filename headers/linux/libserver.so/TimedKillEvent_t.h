#pragma once

struct TimedKillEvent_t  // sizeof 0xC, align 0xFF [trivial_dtor] (server)
{
    int32 m_nKillTime; // offset 0x0, size 0x4, align 4
    float32 m_flKillValue; // offset 0x4, size 0x4, align 4
    PlayerID_t m_nPlayerID; // offset 0x8, size 0x4, align 255
};
