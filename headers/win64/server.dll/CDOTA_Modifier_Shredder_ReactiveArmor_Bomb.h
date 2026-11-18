#pragma once

class CDOTA_Modifier_Shredder_ReactiveArmor_Bomb : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 initial_shield; // offset 0x1AF8, size 0x4, align 4
    float32 max_shield; // offset 0x1AFC, size 0x4, align 4
    float32 shield_per_sec; // offset 0x1B00, size 0x4, align 4
    float32 shield_per_sec_per_enemy; // offset 0x1B04, size 0x4, align 4
    float32 duration; // offset 0x1B08, size 0x4, align 4
    float32 base_explosion; // offset 0x1B0C, size 0x4, align 4
    float32 radius; // offset 0x1B10, size 0x4, align 4
    float32 explosion_radius; // offset 0x1B14, size 0x4, align 4
    int32 m_nDamageAbsorbed; // offset 0x1B18, size 0x4, align 4
    GameTime_t m_timeLastTick; // offset 0x1B1C, size 0x4, align 255
    GameTime_t m_StartTime; // offset 0x1B20, size 0x4, align 255
    int32 m_nLastParticleTime; // offset 0x1B24, size 0x4, align 4
};
