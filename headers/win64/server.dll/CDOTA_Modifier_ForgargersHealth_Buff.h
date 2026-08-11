#pragma once

class CDOTA_Modifier_ForgargersHealth_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 health_regen_pct; // offset 0x1A78, size 0x4, align 4
    int32 break_on_hero_damage; // offset 0x1A7C, size 0x4, align 4
    float32 m_fHealingDone; // offset 0x1A80, size 0x4, align 4
    float32 m_fUseSpeed; // offset 0x1A84, size 0x4, align 4
    CUtlString m_sAbilityClassname; // offset 0x1A88, size 0x8, align 8
};
