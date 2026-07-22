#pragma once

class CDOTA_Modifier_Seasonal_TI9_Shovel_Pudgling : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x1A58, size 0x4, align 255
    int32 m_nActionCount; // offset 0x1A5C, size 0x4, align 4
    VectorWS m_vecStartingPos; // offset 0x1A60, size 0xC, align 4
    Vector m_vecDestinationOffset; // offset 0x1A6C, size 0xC, align 4
    char _pad_1A78[0x18]; // offset 0x1A78
};
