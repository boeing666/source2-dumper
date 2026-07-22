#pragma once

class CDOTA_Modifier_Windrunner_FocusFire : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A58, size 0x4, align 4
    int32 focusfire_damage_reduction; // offset 0x1A5C, size 0x4, align 4
    bool bActive; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x3]; // offset 0x1A61
    int32 bonus_attack_speed; // offset 0x1A64, size 0x4, align 4
    int32 focusfire_fire_on_the_move; // offset 0x1A68, size 0x4, align 4
    bool m_bPause; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
    int32 m_nNumArrowsLanded; // offset 0x1A70, size 0x4, align 4
    int32 m_nDamageDealt; // offset 0x1A74, size 0x4, align 4
    int32 m_nDamageDealtMax; // offset 0x1A78, size 0x4, align 4
    int32 m_nTargetInitialHP; // offset 0x1A7C, size 0x4, align 4
    bool m_bHeroKilled; // offset 0x1A80, size 0x1, align 1
    bool m_bRecentFocusFireAttack; // offset 0x1A81, size 0x1, align 1
    bool m_bFocusFireProcessProcs; // offset 0x1A82, size 0x1, align 1
    char _pad_1A83[0x15]; // offset 0x1A83
    ParticleIndex_t m_nFXFocusFire; // offset 0x1A98, size 0x4, align 255
    GameTime_t m_flLastFocusFireAttackTime; // offset 0x1A9C, size 0x4, align 255
};
