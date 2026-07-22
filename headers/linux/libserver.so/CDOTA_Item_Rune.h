#pragma once

class CDOTA_Item_Rune : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    CHandle< CBaseEntity > m_hRuneSpawner; // offset 0xA88, size 0x4, align 4
    int32 m_iRuneType; // offset 0xA8C, size 0x4, align 4
    GameTime_t m_flRuneTime; // offset 0xA90, size 0x4, align 255
    int32 m_nMapLocationTeam; // offset 0xA94, size 0x4, align 4
    char[512] m_szLocation; // offset 0xA98, size 0x200, align 1
};
