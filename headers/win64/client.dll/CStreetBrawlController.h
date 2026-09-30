#pragma once

class CStreetBrawlController  // sizeof 0x28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    EStreetBrawlGameState m_eStreetBrawlState; // offset 0x8, size 0x4, align 4
    GameTime_t m_flStreetBrawlStateStartTime; // offset 0xC, size 0x4, align 255
    GameTime_t m_flNextStateTime; // offset 0x10, size 0x4, align 255
    float32 m_flStreetBrawlTotalNonCombatTime; // offset 0x14, size 0x4, align 4
    int32 m_iRound; // offset 0x18, size 0x4, align 4
    int32 m_iLastBuyCountDown; // offset 0x1C, size 0x4, align 4
    int32 m_iTeamSapphireScore; // offset 0x20, size 0x4, align 4
    int32 m_iTeamAmberScore; // offset 0x24, size 0x4, align 4
};
