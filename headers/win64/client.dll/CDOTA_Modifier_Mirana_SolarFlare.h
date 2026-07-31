#pragma once

class CDOTA_Modifier_Mirana_SolarFlare : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 duration; // offset 0x1A78, size 0x4, align 4
    float32 smoothness; // offset 0x1A7C, size 0x4, align 4
    float32 increase_rate; // offset 0x1A80, size 0x4, align 4
    int32 max_total_increase; // offset 0x1A84, size 0x4, align 4
    GameTime_t flMaxDamageGameTime; // offset 0x1A88, size 0x4, align 255
    int32 evasion; // offset 0x1A8C, size 0x4, align 4
    int32 m_iTotalAmount; // offset 0x1A90, size 0x4, align 4
    int32 ally_pct; // offset 0x1A94, size 0x4, align 4
};
