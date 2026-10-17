#pragma once

class CDOTA_Modifier_Chen_HolyPersuasion : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 health_min; // offset 0x1AA8, size 0x4, align 4
    int32 damage_bonus; // offset 0x1AAC, size 0x4, align 4
    int32 movement_speed_bonus; // offset 0x1AB0, size 0x4, align 4
    float32 unsummon_time; // offset 0x1AB4, size 0x4, align 4
    bool m_bCanBeUnsummoned; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x7]; // offset 0x1AB9
};
