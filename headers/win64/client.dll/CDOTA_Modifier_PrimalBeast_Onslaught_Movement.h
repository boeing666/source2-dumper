#pragma once

class CDOTA_Modifier_PrimalBeast_Onslaught_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 tick_interval; // offset 0x1A78, size 0x4, align 4
    float32 charge_speed; // offset 0x1A7C, size 0x4, align 4
    float32 movement_turn_rate; // offset 0x1A80, size 0x4, align 4
    float32 knockback_radius; // offset 0x1A84, size 0x4, align 4
    float32 knockback_distance; // offset 0x1A88, size 0x4, align 4
    int32 knockback_damage; // offset 0x1A8C, size 0x4, align 4
    int32 m_nEnemyHeroesHit; // offset 0x1A90, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1A94, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A98, size 0x4, align 255
    char _pad_1A9C[0x4]; // offset 0x1A9C
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x1AA0, size 0x18, align 8
};
