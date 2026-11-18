#pragma once

class CDOTA_Modifier_Pangolier_GyroshellBounce : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vLoc; // offset 0x1AF8, size 0xC, align 4
    float32 m_flPredictedTotalTime; // offset 0x1B04, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B08, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1B14, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1B18, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1B1C, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1B1D, size 0x1, align 1
    char _pad_1B1E[0x2]; // offset 0x1B1E
    Vector m_vHorizontalVelocity; // offset 0x1B20, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1B2C, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
