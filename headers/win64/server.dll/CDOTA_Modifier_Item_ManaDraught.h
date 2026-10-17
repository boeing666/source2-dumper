#pragma once

class CDOTA_Modifier_Item_ManaDraught : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 water_acceleration; // offset 0x1AA8, size 0x4, align 4
    bool m_bInWater; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
};
