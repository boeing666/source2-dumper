#pragma once

class CDOTA_Item_Ward_Maker : public CDOTA_Item /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    float32 sentry_refresh; // offset 0x658, size 0x4, align 4
    int32 max_sentry_charges; // offset 0x65C, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x660, size 0x4, align 255
    float32 m_flTimeAccumulator; // offset 0x664, size 0x4, align 4
};
