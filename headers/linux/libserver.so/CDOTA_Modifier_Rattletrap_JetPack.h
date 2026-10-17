#pragma once

class CDOTA_Modifier_Rattletrap_JetPack : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_nMovementSpeed; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_speed; // offset 0x1AAC, size 0x4, align 4
    float32 turn_rate; // offset 0x1AB0, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x1AB4, size 0x4, align 255
    float32 tick_interval; // offset 0x1AB8, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1ABC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AC0, size 0x4, align 255
    char _pad_1AC4[0x4]; // offset 0x1AC4
    CUtlVector< float32 > m_flTurnHistory; // offset 0x1AC8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesHitLastRicochet; // offset 0x1AE0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesCredited; // offset 0x1AF8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesHitCurrentRicochet; // offset 0x1B10, size 0x18, align 8
};
