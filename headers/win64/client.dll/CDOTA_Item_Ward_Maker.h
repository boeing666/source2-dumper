#pragma once

class CDOTA_Item_Ward_Maker : public C_DOTA_Item /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    float32 sentry_refresh; // offset 0x758, size 0x4, align 4
    int32 max_sentry_charges; // offset 0x75C, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x760, size 0x4, align 255
    float32 m_flTimeAccumulator; // offset 0x764, size 0x4, align 4
};
