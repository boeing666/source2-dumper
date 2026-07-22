#pragma once

struct NianDamageTaken_t  // sizeof 0x14, align 0xFF [trivial_dtor] (server)
{
    int32 nDamage; // offset 0x0, size 0x4, align 4
    PlayerID_t nPlayerID; // offset 0x4, size 0x4, align 255
    Vector vPos; // offset 0x8, size 0xC, align 4
};
