#pragma once

class CDOTA_Modifier_ForgargersHealth_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 health_regen_pct; // offset 0x1AA8, size 0x4, align 4
    int32 break_on_hero_damage; // offset 0x1AAC, size 0x4, align 4
    float32 m_fHealingDone; // offset 0x1AB0, size 0x4, align 4
    float32 m_fUseSpeed; // offset 0x1AB4, size 0x4, align 4
    CUtlString m_sAbilityClassname; // offset 0x1AB8, size 0x8, align 8
};
