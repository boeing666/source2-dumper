#pragma once

class CDOTA_Modifier_Rattletrap_JetPack : public CDOTA_Buff /*0x0*/  // sizeof 0x1B78, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 m_nMovementSpeed; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_speed; // offset 0x1AFC, size 0x4, align 4
    float32 turn_rate; // offset 0x1B00, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x1B04, size 0x4, align 255
    float32 tick_interval; // offset 0x1B08, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1B0C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B10, size 0x4, align 255
    char _pad_1B14[0x4]; // offset 0x1B14
    CUtlVector< float32 > m_flTurnHistory; // offset 0x1B18, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesHitLastRicochet; // offset 0x1B30, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesCredited; // offset 0x1B48, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesHitCurrentRicochet; // offset 0x1B60, size 0x18, align 8
};
