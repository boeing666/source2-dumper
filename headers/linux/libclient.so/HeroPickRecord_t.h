#pragma once

struct HeroPickRecord_t  // sizeof 0xC, align 0xFF [trivial_dtor] (client)
{
    HeroPickType eType; // offset 0x0, size 0x4, align 4
    HeroID_t nHeroID; // offset 0x4, size 0x4, align 255
    int32 nTeam; // offset 0x8, size 0x4, align 4
};
