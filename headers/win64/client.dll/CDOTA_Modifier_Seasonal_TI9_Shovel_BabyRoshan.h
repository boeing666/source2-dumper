#pragma once

class CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bFirstThink; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    GameTime_t m_flStartTime; // offset 0x1A5C, size 0x4, align 255
    VectorWS m_vecStartingPos; // offset 0x1A60, size 0xC, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
