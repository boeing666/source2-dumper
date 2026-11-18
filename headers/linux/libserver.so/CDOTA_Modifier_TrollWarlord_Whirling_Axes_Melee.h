#pragma once

class CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee : public CDOTA_Buff /*0x0*/  // sizeof 0x1B68, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage; // offset 0x1AF8, size 0x4, align 4
    float32 hit_radius; // offset 0x1AFC, size 0x4, align 4
    float32 axe_movement_speed; // offset 0x1B00, size 0x4, align 4
    float32 whirl_duration; // offset 0x1B04, size 0x4, align 4
    float32 max_range; // offset 0x1B08, size 0x4, align 4
    float32 blind_duration; // offset 0x1B0C, size 0x4, align 4
    float32 m_flRotation; // offset 0x1B10, size 0x4, align 4
    float32 m_flAxeRadius; // offset 0x1B14, size 0x4, align 4
    GameTime_t m_flWhirlDieTime; // offset 0x1B18, size 0x4, align 255
    float32 m_bPiercesMagicImmunity; // offset 0x1B1C, size 0x4, align 4
    int32 m_nSwapIndex; // offset 0x1B20, size 0x4, align 4
    bool m_bReturning; // offset 0x1B24, size 0x1, align 1
    char _pad_1B25[0x3]; // offset 0x1B25
    ParticleIndex_t[2] m_nAxeFXIndex; // offset 0x1B28, size 0x8, align 4
    int32 m_nHeroesHitForRelic; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
    CUtlVector< CHandle< CBaseEntity > > hitEntities; // offset 0x1B38, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hAxes; // offset 0x1B50, size 0x18, align 8
};
