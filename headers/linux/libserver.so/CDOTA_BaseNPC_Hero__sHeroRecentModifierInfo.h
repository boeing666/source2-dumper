#pragma once

class CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo  // sizeof 0x10, align 0xFF [trivial_dtor] (server)
{
public:
    PlayerID_t nSourcePlayerID; // offset 0x0, size 0x4, align 255
    bool bBuff; // offset 0x4, size 0x1, align 1
    char _pad_0005[0x3]; // offset 0x5
    int32 nAbilityIndex; // offset 0x8, size 0x4, align 4
    GameTime_t fTime; // offset 0xC, size 0x4, align 255
};
