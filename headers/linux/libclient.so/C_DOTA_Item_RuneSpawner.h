#pragma once

class C_DOTA_Item_RuneSpawner : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC44]; // offset 0x0
    DOTA_RUNES m_nRuneType; // offset 0xC44, size 0x4, align 4
    float32 m_flLastSpawnTime; // offset 0xC48, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0xC4C, size 0x4, align 4
};
