#pragma once

class CDOTA_Item_RuneSpawner_XP : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB50]; // offset 0x0
    CUtlSymbolLarge m_szPosition; // offset 0xB50, size 0x8, align 8
    int32 m_nDotaTeam; // offset 0xB58, size 0x4, align 4
    float32 m_flLastSpawnTime; // offset 0xB5C, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0xB60, size 0x4, align 4
    char _pad_0B64[0x4]; // offset 0xB64
};
