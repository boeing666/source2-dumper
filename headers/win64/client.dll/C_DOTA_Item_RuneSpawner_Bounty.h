#pragma once

class C_DOTA_Item_RuneSpawner_Bounty : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    DOTA_RUNES m_nRuneType; // offset 0xC10, size 0x4, align 4
    float32 m_flLastSpawnTime; // offset 0xC14, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0xC18, size 0x4, align 4
    char _pad_0C1C[0x4]; // offset 0xC1C
};
