#pragma once

class CDOTA_Modifier_PhantomAssassin_Fan_Of_Knives_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_fCurRadius; // offset 0x1AA8, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1AAC, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_entitiesHit; // offset 0x1AB0, size 0x18, align 8
    CountdownTimer m_ViewerTimer; // offset 0x1AC8, size 0x18, align 8
    float32 projectile_speed; // offset 0x1AE0, size 0x4, align 4
    float32 radius; // offset 0x1AE4, size 0x4, align 4
    float32 duration; // offset 0x1AE8, size 0x4, align 4
    float32 pct_health_damage_initial; // offset 0x1AEC, size 0x4, align 4
    float32 max_damage_initial; // offset 0x1AF0, size 0x4, align 4
    char _pad_1AF4[0x4]; // offset 0x1AF4
};
