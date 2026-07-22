#pragma once

class CDOTA_Item_RuneSpawner : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    float32 m_flLastSpawnTime; // offset 0xA70, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0xA74, size 0x4, align 4
};
