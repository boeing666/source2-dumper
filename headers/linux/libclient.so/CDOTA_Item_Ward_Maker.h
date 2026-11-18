#pragma once

class CDOTA_Item_Ward_Maker : public C_DOTA_Item /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8DC]; // offset 0x0
    float32 sentry_refresh; // offset 0x8DC, size 0x4, align 4
    int32 max_sentry_charges; // offset 0x8E0, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x8E4, size 0x4, align 255
    float32 m_flTimeAccumulator; // offset 0x8E8, size 0x4, align 4
    char _pad_08EC[0x4]; // offset 0x8EC
};
