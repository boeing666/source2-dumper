#pragma once

class CDOTA_Modifier_FlaskHealing : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 health_regen; // offset 0x1AF8, size 0x4, align 4
    int32 break_on_hero_damage; // offset 0x1AFC, size 0x4, align 4
    bool half_heal; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    float32 m_fHealingDone; // offset 0x1B04, size 0x4, align 4
    float32 m_fUseSpeed; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
    CUtlString m_sAbilityClassname; // offset 0x1B10, size 0x8, align 8
};
