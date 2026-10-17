#pragma once

class CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bFirstThink; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    GameTime_t m_flStartTime; // offset 0x1AAC, size 0x4, align 255
    VectorWS m_vecStartingPos; // offset 0x1AB0, size 0xC, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
