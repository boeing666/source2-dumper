#pragma once

class CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster : public CDOTA_Buff /*0x0*/  // sizeof 0x1B68, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 movement_speed; // offset 0x1AF8, size 0x4, align 4
    int32 shard_movement_penalty; // offset 0x1AFC, size 0x4, align 4
    float32 swipe_radius; // offset 0x1B00, size 0x4, align 4
    float32 swipe_damage; // offset 0x1B04, size 0x4, align 4
    float32 smash_radius; // offset 0x1B08, size 0x4, align 4
    float32 smash_damage; // offset 0x1B0C, size 0x4, align 4
    float32 m_flCurrentSpeed; // offset 0x1B10, size 0x4, align 4
    float32 flSwipeInterval; // offset 0x1B14, size 0x4, align 4
    GameTime_t m_flNextHit; // offset 0x1B18, size 0x4, align 255
    int32 iCurrentAttack; // offset 0x1B1C, size 0x4, align 4
    int32 total_attacks; // offset 0x1B20, size 0x4, align 4
    float32 smash_stun_duration; // offset 0x1B24, size 0x4, align 4
    float32 sweep_stun_duration; // offset 0x1B28, size 0x4, align 4
    bool m_bHasCompletedMove; // offset 0x1B2C, size 0x1, align 1
    char _pad_1B2D[0x3]; // offset 0x1B2D
    float32 duration; // offset 0x1B30, size 0x4, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1B34, size 0xC, align 4
    float32 smash_distance_from_hero; // offset 0x1B40, size 0x4, align 4
    float32 animation_rate; // offset 0x1B44, size 0x4, align 4
    float32 turn_rate; // offset 0x1B48, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1B4C, size 0x4, align 4
    float32 movespeed_bonus_self_max; // offset 0x1B50, size 0x4, align 4
    float32 movespeed_bonus_ally_max; // offset 0x1B54, size 0x4, align 4
    float32 movespeed_bonus_radius; // offset 0x1B58, size 0x4, align 4
    float32 movespeed_bonus_duration; // offset 0x1B5C, size 0x4, align 4
    float32 immunity_resist; // offset 0x1B60, size 0x4, align 4
    int32 m_iSuccessfulSwipesHittingHeroes; // offset 0x1B64, size 0x4, align 4
};
