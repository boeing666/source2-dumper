#pragma once

class CDOTA_Modifier_Beastmaster_Hawk_Dive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    float32 m_flPredictedTotalTime; // offset 0x1AAC, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AB0, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1ABC, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1AC0, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1AC4, size 0x1, align 1
    bool m_bDamageApplied; // offset 0x1AC5, size 0x1, align 1
    char _pad_1AC6[0x2]; // offset 0x1AC6
    Vector m_vHorizontalVelocity; // offset 0x1AC8, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1AD4, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1AE0, size 0x4, align 4
    bool m_bDone; // offset 0x1AE4, size 0x1, align 1
    char _pad_1AE5[0x3]; // offset 0x1AE5
    int32 dive_damage; // offset 0x1AE8, size 0x4, align 4
    float32 dive_root_duration; // offset 0x1AEC, size 0x4, align 4
};
