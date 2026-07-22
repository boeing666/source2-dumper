#pragma once

class CDOTA_Item_RuneSpawner_Bounty : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    CUtlSymbolLarge m_szPosition; // offset 0xA70, size 0x8, align 8
    int32 m_nDotaTeam; // offset 0xA78, size 0x4, align 4
    float32 m_flLastSpawnTime; // offset 0xA7C, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0xA80, size 0x4, align 4
    char _pad_0A84[0x4]; // offset 0xA84
};
