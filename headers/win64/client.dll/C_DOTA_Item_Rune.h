#pragma once

class C_DOTA_Item_Rune : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xED8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC20]; // offset 0x0
    int32 m_iRuneType; // offset 0xC20, size 0x4, align 4
    GameTime_t m_flRuneTime; // offset 0xC24, size 0x4, align 255
    int32 m_nMapLocationTeam; // offset 0xC28, size 0x4, align 4
    char[512] m_szLocation; // offset 0xC2C, size 0x200, align 1
    int32 m_iOldRuneType; // offset 0xE2C, size 0x4, align 4
    bool m_bShowingTooltip; // offset 0xE30, size 0x1, align 1
    char _pad_0E31[0xA7]; // offset 0xE31
};
