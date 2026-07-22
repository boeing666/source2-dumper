#pragma once

class C_DOTA_Item_EmptyBottle : public C_DOTA_Item /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    int32 m_iStoredRuneType; // offset 0x758, size 0x4, align 4
    GameTime_t m_fStoredRuneTime; // offset 0x75C, size 0x4, align 255
    float32 rune_expire_time; // offset 0x760, size 0x4, align 4
    char _pad_0764[0x4]; // offset 0x764
};
