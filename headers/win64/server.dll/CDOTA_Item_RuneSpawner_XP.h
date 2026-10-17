#pragma once

class CDOTA_Item_RuneSpawner_XP : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CUtlSymbolLarge m_szPosition; // offset 0x878, size 0x8, align 8
    int32 m_nDotaTeam; // offset 0x880, size 0x4, align 4
    float32 m_flLastSpawnTime; // offset 0x884, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x4]; // offset 0x88C
};
