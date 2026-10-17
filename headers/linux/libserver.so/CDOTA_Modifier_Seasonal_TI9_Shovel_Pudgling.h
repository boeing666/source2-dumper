#pragma once

class CDOTA_Modifier_Seasonal_TI9_Shovel_Pudgling : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x1AA8, size 0x4, align 255
    int32 m_nActionCount; // offset 0x1AAC, size 0x4, align 4
    VectorWS m_vecStartingPos; // offset 0x1AB0, size 0xC, align 4
    Vector m_vecDestinationOffset; // offset 0x1ABC, size 0xC, align 4
    char _pad_1AC8[0x18]; // offset 0x1AC8
};
