#pragma once

class CDOTA_Modifier_Windrunner_FocusFire : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    int32 focusfire_damage_reduction; // offset 0x1A7C, size 0x4, align 4
    bool bActive; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    int32 bonus_attack_speed; // offset 0x1A84, size 0x4, align 4
    int32 focusfire_fire_on_the_move; // offset 0x1A88, size 0x4, align 4
    bool m_bPause; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x3]; // offset 0x1A8D
    int32 m_nNumArrowsLanded; // offset 0x1A90, size 0x4, align 4
    int32 m_nDamageDealt; // offset 0x1A94, size 0x4, align 4
    int32 m_nDamageDealtMax; // offset 0x1A98, size 0x4, align 4
    int32 m_nTargetInitialHP; // offset 0x1A9C, size 0x4, align 4
    bool m_bHeroKilled; // offset 0x1AA0, size 0x1, align 1
    bool m_bRecentFocusFireAttack; // offset 0x1AA1, size 0x1, align 1
    bool m_bFocusFireProcessProcs; // offset 0x1AA2, size 0x1, align 1
    char _pad_1AA3[0x15]; // offset 0x1AA3
    ParticleIndex_t m_nFXFocusFire; // offset 0x1AB8, size 0x4, align 255
    GameTime_t m_flLastFocusFireAttackTime; // offset 0x1ABC, size 0x4, align 255
};
