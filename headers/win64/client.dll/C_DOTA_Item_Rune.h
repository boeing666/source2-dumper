#pragma once

class C_DOTA_Item_Rune : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAD8]; // offset 0x0
    int32 m_iRuneType; // offset 0xAD8, size 0x4, align 4
    GameTime_t m_flRuneTime; // offset 0xADC, size 0x4, align 255
    int32 m_nMapLocationTeam; // offset 0xAE0, size 0x4, align 4
    char[512] m_szLocation; // offset 0xAE4, size 0x200, align 1
    int32 m_iOldRuneType; // offset 0xCE4, size 0x4, align 4
    bool m_bShowingTooltip; // offset 0xCE8, size 0x1, align 1
    char _pad_0CE9[0xA7]; // offset 0xCE9
};
