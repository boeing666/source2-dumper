#pragma once

class CDOTA_Modifier_ChaosKnight_Armaggedons_Flank : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 tick_interval; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_speed; // offset 0x1AFC, size 0x4, align 4
    float32 movement_turn_rate_max; // offset 0x1B00, size 0x4, align 4
    float32 movement_turn_rate_min; // offset 0x1B04, size 0x4, align 4
    float32 movement_accel_per_second; // offset 0x1B08, size 0x4, align 4
    float32 splash_aoe; // offset 0x1B0C, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1B10, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1B14, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B18, size 0x4, align 255
    float32 m_flCurSpeed; // offset 0x1B1C, size 0x4, align 4
    float32 m_flSpeedAtCollision; // offset 0x1B20, size 0x4, align 4
    bool m_bCollidedLastFrame; // offset 0x1B24, size 0x1, align 1
    bool m_bSupercededByLeap; // offset 0x1B25, size 0x1, align 1
    char _pad_1B26[0x2]; // offset 0x1B26
    GameTime_t m_NextAttackTime; // offset 0x1B28, size 0x4, align 255
    char _pad_1B2C[0x4]; // offset 0x1B2C
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x1B30, size 0x18, align 8
};
