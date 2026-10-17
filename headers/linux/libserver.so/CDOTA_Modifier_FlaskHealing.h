#pragma once

class CDOTA_Modifier_FlaskHealing : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 health_regen; // offset 0x1AA8, size 0x4, align 4
    int32 break_on_hero_damage; // offset 0x1AAC, size 0x4, align 4
    bool half_heal; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    float32 m_fHealingDone; // offset 0x1AB4, size 0x4, align 4
    float32 m_fUseSpeed; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
    CUtlString m_sAbilityClassname; // offset 0x1AC0, size 0x8, align 8
};
