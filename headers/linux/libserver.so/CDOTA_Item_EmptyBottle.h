#pragma once

class CDOTA_Item_EmptyBottle : public CDOTA_Item /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    int32 m_iStoredRuneType; // offset 0x934, size 0x4, align 4
    GameTime_t m_fStoredRuneTime; // offset 0x938, size 0x4, align 255
    GameTime_t m_fStoredRuneSpawnTime; // offset 0x93C, size 0x4, align 255
    float32 rune_expire_time; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
};
