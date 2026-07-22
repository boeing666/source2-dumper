#pragma once

class CDOTA_Modifier_Safety_Bubble : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_nDamageAbsorbed; // offset 0x1A58, size 0x4, align 4
    GameTime_t m_timeLastDamage; // offset 0x1A5C, size 0x4, align 255
    int32 bonus_hp_regen; // offset 0x1A60, size 0x4, align 4
    int32 shield; // offset 0x1A64, size 0x4, align 4
    float32 restore_time; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
