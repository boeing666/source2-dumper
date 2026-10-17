#pragma once

class CDOTA_Modifier_PrimalBeast_Onslaught_Knockback : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vLoc; // offset 0x1AA8, size 0xC, align 4
    float32 m_flPredictedTotalTime; // offset 0x1AB4, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AB8, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1AC4, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1AC8, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1ACC, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1ACD, size 0x1, align 1
    char _pad_1ACE[0x2]; // offset 0x1ACE
    Vector m_vHorizontalVelocity; // offset 0x1AD0, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1ADC, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1AE8, size 0x4, align 4
    char _pad_1AEC[0x4]; // offset 0x1AEC
};
