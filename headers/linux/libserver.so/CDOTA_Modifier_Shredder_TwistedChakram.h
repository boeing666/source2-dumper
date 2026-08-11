#pragma once

class CDOTA_Modifier_Shredder_TwistedChakram : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vControlOne; // offset 0x1A78, size 0xC, align 4
    VectorWS m_vControlTwo; // offset 0x1A84, size 0xC, align 4
    VectorWS m_vControlThree; // offset 0x1A90, size 0xC, align 4
    VectorWS m_vControlFour; // offset 0x1A9C, size 0xC, align 4
    VectorWS m_vTargetLoc; // offset 0x1AA8, size 0xC, align 4
    VectorWS m_vOriginalTargetLoc; // offset 0x1AB4, size 0xC, align 4
    VectorWS m_vSourceLoc; // offset 0x1AC0, size 0xC, align 4
    VectorWS m_vMidPoint; // offset 0x1ACC, size 0xC, align 4
    VectorWS m_vEndPoint; // offset 0x1AD8, size 0xC, align 4
    int32 m_nCurrentLeg; // offset 0x1AE4, size 0x4, align 4
    float32 m_flTravelDuration; // offset 0x1AE8, size 0x4, align 4
    GameTime_t m_flBoomerangDieTime; // offset 0x1AEC, size 0x4, align 255
    bool m_bReturning; // offset 0x1AF0, size 0x1, align 1
    char _pad_1AF1[0x3]; // offset 0x1AF1
    int32 m_nFramesToWait; // offset 0x1AF4, size 0x4, align 4
    CHandle< CBaseEntity > m_hChakram; // offset 0x1AF8, size 0x4, align 4
    ParticleIndex_t m_nChakramFXIndex; // offset 0x1AFC, size 0x4, align 255
    ParticleIndex_t m_nOldChakramFXindex; // offset 0x1B00, size 0x4, align 255
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList; // offset 0x1B08, size 0x18, align 8
    float32 radius; // offset 0x1B20, size 0x4, align 4
    float32 spread; // offset 0x1B24, size 0x4, align 4
    float32 damage; // offset 0x1B28, size 0x4, align 4
    float32 pass_slow_duration; // offset 0x1B2C, size 0x4, align 4
    float32 min_throw_duration; // offset 0x1B30, size 0x4, align 4
    float32 max_throw_duration; // offset 0x1B34, size 0x4, align 4
    char _pad_1B38[0x18]; // offset 0x1B38
};
