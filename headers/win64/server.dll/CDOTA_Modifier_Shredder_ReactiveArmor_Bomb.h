#pragma once

class CDOTA_Modifier_Shredder_ReactiveArmor_Bomb : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 initial_shield; // offset 0x1AA8, size 0x4, align 4
    float32 max_shield; // offset 0x1AAC, size 0x4, align 4
    float32 shield_per_sec; // offset 0x1AB0, size 0x4, align 4
    float32 shield_per_sec_per_enemy; // offset 0x1AB4, size 0x4, align 4
    float32 duration; // offset 0x1AB8, size 0x4, align 4
    float32 base_explosion; // offset 0x1ABC, size 0x4, align 4
    float32 radius; // offset 0x1AC0, size 0x4, align 4
    float32 explosion_radius; // offset 0x1AC4, size 0x4, align 4
    int32 m_nDamageAbsorbed; // offset 0x1AC8, size 0x4, align 4
    GameTime_t m_timeLastTick; // offset 0x1ACC, size 0x4, align 255
    GameTime_t m_StartTime; // offset 0x1AD0, size 0x4, align 255
    int32 m_nLastParticleTime; // offset 0x1AD4, size 0x4, align 4
};
