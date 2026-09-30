#pragma once

class CCitadel_CosmeticAbility_Snowball : public CCitadel_CosmeticAbility /*0x0*/  // sizeof 0x1A58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A48]; // offset 0x0
    int32 m_nSeasonal2025Level; // offset 0x1A48, size 0x4, align 4
    float32 m_flSeasonal2025LevelFrac; // offset 0x1A4C, size 0x4, align 4
    GameTime_t m_flNextShotTime; // offset 0x1A50, size 0x4, align 255
    int32 m_nShotsRemaining; // offset 0x1A54, size 0x4, align 4
};
