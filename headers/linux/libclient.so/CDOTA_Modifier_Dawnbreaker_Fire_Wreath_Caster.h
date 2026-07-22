#pragma once

class CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 movement_speed; // offset 0x1A58, size 0x4, align 4
    int32 shard_movement_penalty; // offset 0x1A5C, size 0x4, align 4
    float32 swipe_radius; // offset 0x1A60, size 0x4, align 4
    float32 swipe_damage; // offset 0x1A64, size 0x4, align 4
    float32 smash_radius; // offset 0x1A68, size 0x4, align 4
    float32 smash_damage; // offset 0x1A6C, size 0x4, align 4
    float32 m_flCurrentSpeed; // offset 0x1A70, size 0x4, align 4
    float32 flSwipeInterval; // offset 0x1A74, size 0x4, align 4
    GameTime_t m_flNextHit; // offset 0x1A78, size 0x4, align 255
    int32 iCurrentAttack; // offset 0x1A7C, size 0x4, align 4
    int32 total_attacks; // offset 0x1A80, size 0x4, align 4
    float32 smash_stun_duration; // offset 0x1A84, size 0x4, align 4
    float32 sweep_stun_duration; // offset 0x1A88, size 0x4, align 4
    bool m_bHasCompletedMove; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x3]; // offset 0x1A8D
    float32 duration; // offset 0x1A90, size 0x4, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1A94, size 0xC, align 4
    float32 smash_distance_from_hero; // offset 0x1AA0, size 0x4, align 4
    float32 animation_rate; // offset 0x1AA4, size 0x4, align 4
    float32 turn_rate; // offset 0x1AA8, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1AAC, size 0x4, align 4
    float32 movespeed_bonus_self_max; // offset 0x1AB0, size 0x4, align 4
    float32 movespeed_bonus_ally_max; // offset 0x1AB4, size 0x4, align 4
    float32 movespeed_bonus_radius; // offset 0x1AB8, size 0x4, align 4
    float32 movespeed_bonus_duration; // offset 0x1ABC, size 0x4, align 4
    float32 immunity_resist; // offset 0x1AC0, size 0x4, align 4
    int32 m_iSuccessfulSwipesHittingHeroes; // offset 0x1AC4, size 0x4, align 4
};
