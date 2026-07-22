#pragma once

struct HeroDeathRecord_t  // sizeof 0x10, align 0xFF [trivial_dtor] (client)
{
    PlayerID_t nKillerPlayerID; // offset 0x0, size 0x4, align 255
    PlayerID_t nVictimPlayerID; // offset 0x4, size 0x4, align 255
    float32 fTime; // offset 0x8, size 0x4, align 4
    float32 fTimeRespawn; // offset 0xC, size 0x4, align 4
};
