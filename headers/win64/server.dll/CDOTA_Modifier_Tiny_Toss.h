#pragma once

class CDOTA_Modifier_Tiny_Toss : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    float32 m_flPredictedTotalTime; // offset 0x1AFC, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B00, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1B0C, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1B10, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1B14, size 0x1, align 1
    bool m_bDamageApplied; // offset 0x1B15, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1B16, size 0x1, align 1
    char _pad_1B17[0x1]; // offset 0x1B17
    Vector m_vHorizontalVelocity; // offset 0x1B18, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1B24, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1B30, size 0x4, align 4
    bool m_bDone; // offset 0x1B34, size 0x1, align 1
    char _pad_1B35[0x3]; // offset 0x1B35
    float32 radius; // offset 0x1B38, size 0x4, align 4
    int32 toss_damage; // offset 0x1B3C, size 0x4, align 4
    int32 toss_land_damage_pct; // offset 0x1B40, size 0x4, align 4
    char _pad_1B44[0x4]; // offset 0x1B44
};
