#pragma once

class CDOTA_Modifier_Jakiro_IcePath_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 path_delay; // offset 0x1AA8, size 0x4, align 4
    float32 path_radius; // offset 0x1AAC, size 0x4, align 4
    int32 m_nDamage; // offset 0x1AB0, size 0x4, align 4
    float32 m_flRadius; // offset 0x1AB4, size 0x4, align 4
    float32 stun_duration; // offset 0x1AB8, size 0x4, align 4
    int32 detonate_projectile_speed; // offset 0x1ABC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hUnitsHit; // offset 0x1AC0, size 0x18, align 8
    VectorWS m_vPathStart; // offset 0x1AD8, size 0xC, align 4
    VectorWS m_vPathEnd; // offset 0x1AE4, size 0xC, align 4
    GameTime_t m_fStartTime; // offset 0x1AF0, size 0x4, align 255
    ParticleIndex_t m_nPathEffectIndexa; // offset 0x1AF4, size 0x4, align 255
    ParticleIndex_t m_nPathEffectIndexb; // offset 0x1AF8, size 0x4, align 255
    char _pad_1AFC[0x14]; // offset 0x1AFC
};
