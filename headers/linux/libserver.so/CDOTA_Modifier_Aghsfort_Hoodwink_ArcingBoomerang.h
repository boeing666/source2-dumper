#pragma once

class CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vLeftControl; // offset 0x1AA8, size 0xC, align 4
    VectorWS m_vRightControl; // offset 0x1AB4, size 0xC, align 4
    VectorWS m_vTargetLoc; // offset 0x1AC0, size 0xC, align 4
    VectorWS m_vOriginalTargetLoc; // offset 0x1ACC, size 0xC, align 4
    VectorWS m_vSourceLoc; // offset 0x1AD8, size 0xC, align 4
    float32 m_flBuffDuration; // offset 0x1AE4, size 0x4, align 4
    GameTime_t m_flBuffDieTime; // offset 0x1AE8, size 0x4, align 255
    bool m_bReturning; // offset 0x1AEC, size 0x1, align 1
    char _pad_1AED[0x3]; // offset 0x1AED
    int32 m_nFramesToWait; // offset 0x1AF0, size 0x4, align 4
    CHandle< CBaseEntity > m_hBoomerang; // offset 0x1AF4, size 0x4, align 4
    ParticleIndex_t m_nBoomerangFXIndex; // offset 0x1AF8, size 0x4, align 255
    ParticleIndex_t m_nOldBoomerangFXindex; // offset 0x1AFC, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList; // offset 0x1B00, size 0x18, align 8
    int32 radius; // offset 0x1B18, size 0x4, align 4
    int32 spread; // offset 0x1B1C, size 0x4, align 4
    int32 damage; // offset 0x1B20, size 0x4, align 4
    float32 min_throw_duration; // offset 0x1B24, size 0x4, align 4
    float32 max_throw_duration; // offset 0x1B28, size 0x4, align 4
    char _pad_1B2C[0x14]; // offset 0x1B2C
};
