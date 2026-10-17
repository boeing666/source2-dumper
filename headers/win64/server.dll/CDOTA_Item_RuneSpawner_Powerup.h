#pragma once

class CDOTA_Item_RuneSpawner_Powerup : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CUtlSymbolLarge m_szPosition; // offset 0x878, size 0x8, align 8
    float32 m_flLastSpawnTime; // offset 0x880, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0x884, size 0x4, align 4
    bool m_bNextRuneIsWater; // offset 0x888, size 0x1, align 1
    char _pad_0889[0x7]; // offset 0x889
};
