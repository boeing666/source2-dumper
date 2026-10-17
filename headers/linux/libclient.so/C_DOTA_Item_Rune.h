#pragma once

class C_DOTA_Item_Rune : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x1000, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD48]; // offset 0x0
    int32 m_iRuneType; // offset 0xD48, size 0x4, align 4
    GameTime_t m_flRuneTime; // offset 0xD4C, size 0x4, align 255
    int32 m_nMapLocationTeam; // offset 0xD50, size 0x4, align 4
    char[512] m_szLocation; // offset 0xD54, size 0x200, align 1
    int32 m_iOldRuneType; // offset 0xF54, size 0x4, align 4
    bool m_bShowingTooltip; // offset 0xF58, size 0x1, align 1
    char _pad_0F59[0xA7]; // offset 0xF59
};
