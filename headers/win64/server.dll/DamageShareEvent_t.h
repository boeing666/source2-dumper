#pragma once

struct DamageShareEvent_t  // sizeof 0xC, align 0xFF [trivial_dtor] (server)
{
    float32 m_flOriginalDamage; // offset 0x0, size 0x4, align 4
    float32 m_flTakenDamage; // offset 0x4, size 0x4, align 4
    PlayerID_t m_nPlayerID; // offset 0x8, size 0x4, align 255
};
