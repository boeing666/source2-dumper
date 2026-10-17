#pragma once

class CDOTA_Modifier_Mirana_SolarFlare : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 duration; // offset 0x1AA8, size 0x4, align 4
    float32 smoothness; // offset 0x1AAC, size 0x4, align 4
    float32 increase_rate; // offset 0x1AB0, size 0x4, align 4
    int32 max_total_increase; // offset 0x1AB4, size 0x4, align 4
    GameTime_t flMaxDamageGameTime; // offset 0x1AB8, size 0x4, align 255
    int32 evasion; // offset 0x1ABC, size 0x4, align 4
    int32 m_iTotalAmount; // offset 0x1AC0, size 0x4, align 4
    int32 ally_pct; // offset 0x1AC4, size 0x4, align 4
};
