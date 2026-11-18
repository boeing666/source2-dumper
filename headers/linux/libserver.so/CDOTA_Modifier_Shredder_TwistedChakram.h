#pragma once

class CDOTA_Modifier_Shredder_TwistedChakram : public CDOTA_Buff /*0x0*/  // sizeof 0x1BD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vControlOne; // offset 0x1AF8, size 0xC, align 4
    VectorWS m_vControlTwo; // offset 0x1B04, size 0xC, align 4
    VectorWS m_vControlThree; // offset 0x1B10, size 0xC, align 4
    VectorWS m_vControlFour; // offset 0x1B1C, size 0xC, align 4
    VectorWS m_vTargetLoc; // offset 0x1B28, size 0xC, align 4
    VectorWS m_vOriginalTargetLoc; // offset 0x1B34, size 0xC, align 4
    VectorWS m_vSourceLoc; // offset 0x1B40, size 0xC, align 4
    VectorWS m_vMidPoint; // offset 0x1B4C, size 0xC, align 4
    VectorWS m_vEndPoint; // offset 0x1B58, size 0xC, align 4
    int32 m_nCurrentLeg; // offset 0x1B64, size 0x4, align 4
    float32 m_flTravelDuration; // offset 0x1B68, size 0x4, align 4
    GameTime_t m_flBoomerangDieTime; // offset 0x1B6C, size 0x4, align 255
    bool m_bReturning; // offset 0x1B70, size 0x1, align 1
    char _pad_1B71[0x3]; // offset 0x1B71
    int32 m_nFramesToWait; // offset 0x1B74, size 0x4, align 4
    CHandle< CBaseEntity > m_hChakram; // offset 0x1B78, size 0x4, align 4
    ParticleIndex_t m_nChakramFXIndex; // offset 0x1B7C, size 0x4, align 255
    ParticleIndex_t m_nOldChakramFXindex; // offset 0x1B80, size 0x4, align 255
    char _pad_1B84[0x4]; // offset 0x1B84
    CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList; // offset 0x1B88, size 0x18, align 8
    float32 radius; // offset 0x1BA0, size 0x4, align 4
    float32 spread; // offset 0x1BA4, size 0x4, align 4
    float32 damage; // offset 0x1BA8, size 0x4, align 4
    float32 pass_slow_duration; // offset 0x1BAC, size 0x4, align 4
    float32 min_throw_duration; // offset 0x1BB0, size 0x4, align 4
    float32 max_throw_duration; // offset 0x1BB4, size 0x4, align 4
    char _pad_1BB8[0x18]; // offset 0x1BB8
};
