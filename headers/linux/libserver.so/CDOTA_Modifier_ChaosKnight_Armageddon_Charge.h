#pragma once

class CDOTA_Modifier_ChaosKnight_Armageddon_Charge : public CDOTA_Buff /*0x0*/  // sizeof 0x1B58, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 charge_speed; // offset 0x1AF8, size 0x4, align 4
    float32 turn_rate; // offset 0x1AFC, size 0x4, align 4
    float32 hit_radius; // offset 0x1B00, size 0x4, align 4
    int32 attack_while_charging; // offset 0x1B04, size 0x4, align 4
    float32 jump_distance; // offset 0x1B08, size 0x4, align 4
    float32 jump_height; // offset 0x1B0C, size 0x4, align 4
    float32 run_animation_rate; // offset 0x1B10, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1B14, size 0x4, align 4
    bool m_bSupercededByLeap; // offset 0x1B18, size 0x1, align 1
    bool m_bSwappedStopAbility; // offset 0x1B19, size 0x1, align 1
    char _pad_1B1A[0x2]; // offset 0x1B1A
    float32 m_flCurrentSpeed; // offset 0x1B1C, size 0x4, align 4
    float32 m_flAccelRate; // offset 0x1B20, size 0x4, align 4
    float32 m_flDecelRate; // offset 0x1B24, size 0x4, align 4
    float32 m_flPausedRemainingTime; // offset 0x1B28, size 0x4, align 4
    bool m_bStopping; // offset 0x1B2C, size 0x1, align 1
    bool m_bDurationPaused; // offset 0x1B2D, size 0x1, align 1
    char _pad_1B2E[0x2]; // offset 0x1B2E
    CHandle< CBaseEntity > m_hFacingUnit; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x24]; // offset 0x1B34
};
