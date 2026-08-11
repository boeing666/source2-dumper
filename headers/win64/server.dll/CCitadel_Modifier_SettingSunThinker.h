#pragma once

class CCitadel_Modifier_SettingSunThinker : public CCitadelModifier /*0x0*/  // sizeof 0xF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    float32 m_flTickInterval; // offset 0xD0, size 0x4, align 4
    float32 m_flRadius; // offset 0xD4, size 0x4, align 4
    float32 m_CenterRadius; // offset 0xD8, size 0x4, align 4
    float32 m_CenterDamage; // offset 0xDC, size 0x4, align 4
    float32 m_OuterDamage; // offset 0xE0, size 0x4, align 4
    float32 m_StunDuration; // offset 0xE4, size 0x4, align 4
    float32 m_TargetingDuration; // offset 0xE8, size 0x4, align 4
    float32 m_ShootDuration; // offset 0xEC, size 0x4, align 4
    bool m_bTargetingCompleted; // offset 0xF0, size 0x1, align 1
    bool m_bSecondHit; // offset 0xF1, size 0x1, align 1
    bool m_bTwoHits; // offset 0xF2, size 0x1, align 1
    char _pad_00F3[0x5]; // offset 0xF3
};
