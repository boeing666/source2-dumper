#pragma once

class CDOTA_Item_Rune : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xAF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    CHandle< CBaseEntity > m_hRuneSpawner; // offset 0x8E8, size 0x4, align 4
    int32 m_iRuneType; // offset 0x8EC, size 0x4, align 4
    GameTime_t m_flRuneTime; // offset 0x8F0, size 0x4, align 255
    int32 m_nMapLocationTeam; // offset 0x8F4, size 0x4, align 4
    char[512] m_szLocation; // offset 0x8F8, size 0x200, align 1
};
