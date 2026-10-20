#pragma once

class CCitadel_Modifier_SettingSunThinker : public CCitadelModifier /*0x0*/  // sizeof 0x178, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    float32 m_flTickInterval; // offset 0x150, size 0x4, align 4
    float32 m_flRadius; // offset 0x154, size 0x4, align 4
    float32 m_CenterRadius; // offset 0x158, size 0x4, align 4
    float32 m_CenterDamage; // offset 0x15C, size 0x4, align 4
    float32 m_OuterDamage; // offset 0x160, size 0x4, align 4
    float32 m_StunDuration; // offset 0x164, size 0x4, align 4
    float32 m_TargetingDuration; // offset 0x168, size 0x4, align 4
    float32 m_ShootDuration; // offset 0x16C, size 0x4, align 4
    bool m_bTargetingCompleted; // offset 0x170, size 0x1, align 1
    bool m_bSecondHit; // offset 0x171, size 0x1, align 1
    bool m_bTwoHits; // offset 0x172, size 0x1, align 1
    char _pad_0173[0x5]; // offset 0x173
};
