#pragma once

class CDOTA_Modifier_Hoodwink_ArcingBoomerang : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vLeftControl; // offset 0x1AA8, size 0xC, align 4
    VectorWS m_vRightControl; // offset 0x1AB4, size 0xC, align 4
    VectorWS m_vTargetLoc; // offset 0x1AC0, size 0xC, align 4
    VectorWS m_vOriginalTargetLoc; // offset 0x1ACC, size 0xC, align 4
    VectorWS m_vSourceLoc; // offset 0x1AD8, size 0xC, align 4
    bool m_bGroundTargeted; // offset 0x1AE4, size 0x1, align 1
    char _pad_1AE5[0x3]; // offset 0x1AE5
    float32 m_flTravelDuration; // offset 0x1AE8, size 0x4, align 4
    GameTime_t m_flBoomerangDieTime; // offset 0x1AEC, size 0x4, align 255
    bool m_bReturning; // offset 0x1AF0, size 0x1, align 1
    bool m_bCatchingBoomerang; // offset 0x1AF1, size 0x1, align 1
    bool m_bDisjointed; // offset 0x1AF2, size 0x1, align 1
    char _pad_1AF3[0x1]; // offset 0x1AF3
    int32 m_nFramesToWait; // offset 0x1AF4, size 0x4, align 4
    CHandle< CBaseEntity > m_hBoomerang; // offset 0x1AF8, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AFC, size 0x4, align 4
    ParticleIndex_t m_nBoomerangFXIndex; // offset 0x1B00, size 0x4, align 255
    ParticleIndex_t m_nOldBoomerangFXindex; // offset 0x1B04, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList; // offset 0x1B08, size 0x18, align 8
    float32 radius; // offset 0x1B20, size 0x4, align 4
    float32 spread; // offset 0x1B24, size 0x4, align 4
    float32 damage; // offset 0x1B28, size 0x4, align 4
    float32 mark_duration; // offset 0x1B2C, size 0x4, align 4
    float32 min_throw_duration; // offset 0x1B30, size 0x4, align 4
    float32 max_throw_duration; // offset 0x1B34, size 0x4, align 4
    char _pad_1B38[0x18]; // offset 0x1B38
};
