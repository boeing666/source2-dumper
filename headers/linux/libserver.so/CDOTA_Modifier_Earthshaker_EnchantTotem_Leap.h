#pragma once

class CDOTA_Modifier_Earthshaker_EnchantTotem_Leap : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AAC]; // offset 0x0
    VectorWS m_vLoc; // offset 0x1AAC, size 0xC, align 4
    float32 m_flPredictedTotalTime; // offset 0x1AB8, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1ABC, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1AC8, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1ACC, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1AD0, size 0x1, align 1
    bool m_bDamageApplied; // offset 0x1AD1, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1AD2, size 0x1, align 1
    char _pad_1AD3[0x1]; // offset 0x1AD3
    Vector m_vHorizontalVelocity; // offset 0x1AD4, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1AE0, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1AEC, size 0x4, align 4
    int32 scepter_height; // offset 0x1AF0, size 0x4, align 4
    int32 scepter_height_arcbuffer; // offset 0x1AF4, size 0x4, align 4
    int32 scepter_acceleration_z; // offset 0x1AF8, size 0x4, align 4
    int32 scepter_acceleration_horizontal; // offset 0x1AFC, size 0x4, align 4
};
