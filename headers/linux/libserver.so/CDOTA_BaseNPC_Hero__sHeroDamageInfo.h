#pragma once

class CDOTA_BaseNPC_Hero::sHeroDamageInfo  // sizeof 0x8, align 0xFF [trivial_dtor] (server)
{
public:
    PlayerID_t nDamagingPlayerID; // offset 0x0, size 0x4, align 255
    GameTime_t fTime; // offset 0x4, size 0x4, align 255
};
