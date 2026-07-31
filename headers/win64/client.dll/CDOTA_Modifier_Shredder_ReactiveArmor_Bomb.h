#pragma once

class CDOTA_Modifier_Shredder_ReactiveArmor_Bomb : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 initial_shield; // offset 0x1A78, size 0x4, align 4
    float32 max_shield; // offset 0x1A7C, size 0x4, align 4
    float32 shield_per_sec; // offset 0x1A80, size 0x4, align 4
    float32 shield_per_sec_per_enemy; // offset 0x1A84, size 0x4, align 4
    float32 duration; // offset 0x1A88, size 0x4, align 4
    float32 base_explosion; // offset 0x1A8C, size 0x4, align 4
    float32 radius; // offset 0x1A90, size 0x4, align 4
    float32 explosion_radius; // offset 0x1A94, size 0x4, align 4
    int32 m_nDamageAbsorbed; // offset 0x1A98, size 0x4, align 4
    GameTime_t m_timeLastTick; // offset 0x1A9C, size 0x4, align 255
    GameTime_t m_StartTime; // offset 0x1AA0, size 0x4, align 255
    int32 m_nLastParticleTime; // offset 0x1AA4, size 0x4, align 4
};
