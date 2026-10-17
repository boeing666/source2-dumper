#pragma once

class CDOTA_Modifier_Windrunner_FocusFire : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    int32 focusfire_damage_reduction; // offset 0x1AAC, size 0x4, align 4
    bool bActive; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    int32 bonus_attack_speed; // offset 0x1AB4, size 0x4, align 4
    int32 focusfire_fire_on_the_move; // offset 0x1AB8, size 0x4, align 4
    bool m_bPause; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    int32 m_nNumArrowsLanded; // offset 0x1AC0, size 0x4, align 4
    int32 m_nDamageDealt; // offset 0x1AC4, size 0x4, align 4
    int32 m_nDamageDealtMax; // offset 0x1AC8, size 0x4, align 4
    int32 m_nTargetInitialHP; // offset 0x1ACC, size 0x4, align 4
    bool m_bHeroKilled; // offset 0x1AD0, size 0x1, align 1
    bool m_bRecentFocusFireAttack; // offset 0x1AD1, size 0x1, align 1
    bool m_bFocusFireProcessProcs; // offset 0x1AD2, size 0x1, align 1
    char _pad_1AD3[0x15]; // offset 0x1AD3
    ParticleIndex_t m_nFXFocusFire; // offset 0x1AE8, size 0x4, align 255
    GameTime_t m_flLastFocusFireAttackTime; // offset 0x1AEC, size 0x4, align 255
};
