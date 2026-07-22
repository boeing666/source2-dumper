#pragma once

class C_DOTA_Item_RuneSpawner_Bounty : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xAD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    DOTA_RUNES m_nRuneType; // offset 0xAC0, size 0x4, align 4
    float32 m_flLastSpawnTime; // offset 0xAC4, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0xAC8, size 0x4, align 4
    char _pad_0ACC[0x4]; // offset 0xACC
};
