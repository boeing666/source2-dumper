#pragma once

class CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 damage; // offset 0x1A78, size 0x4, align 4
    float32 hit_radius; // offset 0x1A7C, size 0x4, align 4
    float32 axe_movement_speed; // offset 0x1A80, size 0x4, align 4
    float32 whirl_duration; // offset 0x1A84, size 0x4, align 4
    float32 max_range; // offset 0x1A88, size 0x4, align 4
    float32 blind_duration; // offset 0x1A8C, size 0x4, align 4
    float32 m_flRotation; // offset 0x1A90, size 0x4, align 4
    float32 m_flAxeRadius; // offset 0x1A94, size 0x4, align 4
    GameTime_t m_flWhirlDieTime; // offset 0x1A98, size 0x4, align 255
    float32 m_bPiercesMagicImmunity; // offset 0x1A9C, size 0x4, align 4
    int32 m_nSwapIndex; // offset 0x1AA0, size 0x4, align 4
    bool m_bReturning; // offset 0x1AA4, size 0x1, align 1
    char _pad_1AA5[0x3]; // offset 0x1AA5
    ParticleIndex_t[2] m_nAxeFXIndex; // offset 0x1AA8, size 0x8, align 4
    int32 m_nHeroesHitForRelic; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CUtlVector< CHandle< CBaseEntity > > hitEntities; // offset 0x1AB8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hAxes; // offset 0x1AD0, size 0x18, align 8
};
