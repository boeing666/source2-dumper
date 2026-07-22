#pragma once

class DOTA_AssassinMinigameNetworkState  // sizeof 0x10, align 0xFF [vtable trivial_dtor] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    uint16 nAssassinState; // offset 0x8, size 0x2, align 2
    char _pad_000A[0x2]; // offset 0xA
    HeroID_t nVictimHeroID; // offset 0xC, size 0x4, align 255
};
