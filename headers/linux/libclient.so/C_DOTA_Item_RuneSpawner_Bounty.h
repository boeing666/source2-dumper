#pragma once

class C_DOTA_Item_RuneSpawner_Bounty : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD34]; // offset 0x0
    DOTA_RUNES m_nRuneType; // offset 0xD34, size 0x4, align 4
    float32 m_flLastSpawnTime; // offset 0xD38, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0xD3C, size 0x4, align 4
};
