#pragma once

class CDOTA_Item_Ward_Maker : public CDOTA_Item /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    float32 sentry_refresh; // offset 0x934, size 0x4, align 4
    int32 max_sentry_charges; // offset 0x938, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x93C, size 0x4, align 255
    float32 m_flTimeAccumulator; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
};
