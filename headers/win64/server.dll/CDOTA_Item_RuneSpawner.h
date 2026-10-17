#pragma once

class CDOTA_Item_RuneSpawner : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    float32 m_flLastSpawnTime; // offset 0x878, size 0x4, align 4
    float32 m_flNextSpawnTime; // offset 0x87C, size 0x4, align 4
};
