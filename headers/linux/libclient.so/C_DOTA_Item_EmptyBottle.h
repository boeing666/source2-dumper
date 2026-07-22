#pragma once

class C_DOTA_Item_EmptyBottle : public C_DOTA_Item /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8CC]; // offset 0x0
    int32 m_iStoredRuneType; // offset 0x8CC, size 0x4, align 4
    GameTime_t m_fStoredRuneTime; // offset 0x8D0, size 0x4, align 255
    float32 rune_expire_time; // offset 0x8D4, size 0x4, align 4
};
