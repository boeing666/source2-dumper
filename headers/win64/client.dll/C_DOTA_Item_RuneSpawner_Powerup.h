#pragma once

class C_DOTA_Item_RuneSpawner_Powerup : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    DOTA_RUNES m_nRuneType; // offset 0xBB0, size 0x4, align 4
    float32 m_flLastSpawnTime; // offset 0xBB4, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0xBB8, size 0x4, align 4
    bool m_bNextRuneIsWater; // offset 0xBBC, size 0x1, align 1
    char _pad_0BBD[0x3]; // offset 0xBBD
};
