#pragma once

class CDOTA_Modifier_Jakiro_IcePath_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 path_delay; // offset 0x1A78, size 0x4, align 4
    float32 path_radius; // offset 0x1A7C, size 0x4, align 4
    int32 m_nDamage; // offset 0x1A80, size 0x4, align 4
    float32 m_flRadius; // offset 0x1A84, size 0x4, align 4
    float32 stun_duration; // offset 0x1A88, size 0x4, align 4
    int32 detonate_projectile_speed; // offset 0x1A8C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hUnitsHit; // offset 0x1A90, size 0x18, align 8
    VectorWS m_vPathStart; // offset 0x1AA8, size 0xC, align 4
    VectorWS m_vPathEnd; // offset 0x1AB4, size 0xC, align 4
    GameTime_t m_fStartTime; // offset 0x1AC0, size 0x4, align 255
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
