#pragma once

class CDOTA_Modifier_Techies_Suicide_Leap : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vLoc; // offset 0x1A78, size 0xC, align 4
    float32 m_flPredictedTotalTime; // offset 0x1A84, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A88, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1A94, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1A98, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1A9C, size 0x1, align 1
    bool m_bDamageApplied; // offset 0x1A9D, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1A9E, size 0x1, align 1
    char _pad_1A9F[0x1]; // offset 0x1A9F
    Vector m_vHorizontalVelocity; // offset 0x1AA0, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1AAC, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
