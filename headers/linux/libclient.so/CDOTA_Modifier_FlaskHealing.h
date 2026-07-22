#pragma once

class CDOTA_Modifier_FlaskHealing : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 health_regen; // offset 0x1A58, size 0x4, align 4
    int32 break_on_hero_damage; // offset 0x1A5C, size 0x4, align 4
    bool half_heal; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x3]; // offset 0x1A61
    float32 m_fHealingDone; // offset 0x1A64, size 0x4, align 4
    float32 m_fUseSpeed; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
