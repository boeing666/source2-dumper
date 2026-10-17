#pragma once

class C_DOTA_Item_RuneSpawner_Powerup : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD34]; // offset 0x0
    DOTA_RUNES m_nRuneType; // offset 0xD34, size 0x4, align 4
    float32 m_flLastSpawnTime; // offset 0xD38, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0xD3C, size 0x4, align 4
    bool m_bNextRuneIsWater; // offset 0xD40, size 0x1, align 1
    char _pad_0D41[0x7]; // offset 0xD41
};
