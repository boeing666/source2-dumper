#pragma once

class CDOTA_Modifier_Rattletrap_JetPack : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nMovementSpeed; // offset 0x1A78, size 0x4, align 4
    int32 bonus_speed; // offset 0x1A7C, size 0x4, align 4
    float32 turn_rate; // offset 0x1A80, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x1A84, size 0x4, align 255
    float32 tick_interval; // offset 0x1A88, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1A8C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A90, size 0x4, align 255
    char _pad_1A94[0x4]; // offset 0x1A94
    CUtlVector< float32 > m_flTurnHistory; // offset 0x1A98, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesHitLastRicochet; // offset 0x1AB0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesCredited; // offset 0x1AC8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesHitCurrentRicochet; // offset 0x1AE0, size 0x18, align 8
};
