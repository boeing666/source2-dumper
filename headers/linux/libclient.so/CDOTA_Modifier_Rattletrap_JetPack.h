#pragma once

class CDOTA_Modifier_Rattletrap_JetPack : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_nMovementSpeed; // offset 0x1A58, size 0x4, align 4
    int32 bonus_speed; // offset 0x1A5C, size 0x4, align 4
    float32 turn_rate; // offset 0x1A60, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x1A64, size 0x4, align 255
    float32 tick_interval; // offset 0x1A68, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1A6C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A70, size 0x4, align 255
    char _pad_1A74[0x4]; // offset 0x1A74
    CUtlVector< float32 > m_flTurnHistory; // offset 0x1A78, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesHitLastRicochet; // offset 0x1A90, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesCredited; // offset 0x1AA8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesHitCurrentRicochet; // offset 0x1AC0, size 0x18, align 8
};
