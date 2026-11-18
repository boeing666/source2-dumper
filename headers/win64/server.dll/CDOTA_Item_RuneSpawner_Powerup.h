#pragma once

class CDOTA_Item_RuneSpawner_Powerup : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    CUtlSymbolLarge m_szPosition; // offset 0x8D8, size 0x8, align 8
    float32 m_flLastSpawnTime; // offset 0x8E0, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0x8E4, size 0x4, align 4
    bool m_bNextRuneIsWater; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x7]; // offset 0x8E9
};
