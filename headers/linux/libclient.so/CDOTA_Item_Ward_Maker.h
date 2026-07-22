#pragma once

class CDOTA_Item_Ward_Maker : public C_DOTA_Item /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8CC]; // offset 0x0
    float32 sentry_refresh; // offset 0x8CC, size 0x4, align 4
    int32 max_sentry_charges; // offset 0x8D0, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x8D4, size 0x4, align 255
    float32 m_flTimeAccumulator; // offset 0x8D8, size 0x4, align 4
    char _pad_08DC[0x4]; // offset 0x8DC
};
