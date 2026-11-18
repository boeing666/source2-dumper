#pragma once

class CDOTA_Modifier_Windrunner_FocusFire : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    int32 focusfire_damage_reduction; // offset 0x1AFC, size 0x4, align 4
    bool bActive; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    int32 bonus_attack_speed; // offset 0x1B04, size 0x4, align 4
    int32 focusfire_fire_on_the_move; // offset 0x1B08, size 0x4, align 4
    float32 focusfire_attack_effectiveness; // offset 0x1B0C, size 0x4, align 4
    bool m_bPause; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x3]; // offset 0x1B11
    int32 m_nNumArrowsLanded; // offset 0x1B14, size 0x4, align 4
    int32 m_nDamageDealt; // offset 0x1B18, size 0x4, align 4
    int32 m_nDamageDealtMax; // offset 0x1B1C, size 0x4, align 4
    int32 m_nTargetInitialHP; // offset 0x1B20, size 0x4, align 4
    bool m_bHeroKilled; // offset 0x1B24, size 0x1, align 1
    bool m_bRecentFocusFireAttack; // offset 0x1B25, size 0x1, align 1
    bool m_bFocusFireProcessProcs; // offset 0x1B26, size 0x1, align 1
    char _pad_1B27[0x15]; // offset 0x1B27
    ParticleIndex_t m_nFXFocusFire; // offset 0x1B3C, size 0x4, align 255
    GameTime_t m_flLastFocusFireAttackTime; // offset 0x1B40, size 0x4, align 255
    char _pad_1B44[0x4]; // offset 0x1B44
};
