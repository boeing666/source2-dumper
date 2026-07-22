#pragma once

class CDOTA_Item_Bottomless_Chalice : public CDOTA_Item /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    int32 m_iStoredRuneType; // offset 0x658, size 0x4, align 4
    GameTime_t m_fStoredRuneTime; // offset 0x65C, size 0x4, align 255
    GameTime_t m_fStoredRuneSpawnTime; // offset 0x660, size 0x4, align 255
    float32 stored_rune_duration; // offset 0x664, size 0x4, align 4
};
