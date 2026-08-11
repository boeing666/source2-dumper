#pragma once

class CDOTA_Modifier_Earthshaker_EnchantTotem_Leap : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A7C]; // offset 0x0
    VectorWS m_vLoc; // offset 0x1A7C, size 0xC, align 4
    float32 m_flPredictedTotalTime; // offset 0x1A88, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A8C, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1A98, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1A9C, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1AA0, size 0x1, align 1
    bool m_bDamageApplied; // offset 0x1AA1, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1AA2, size 0x1, align 1
    char _pad_1AA3[0x1]; // offset 0x1AA3
    Vector m_vHorizontalVelocity; // offset 0x1AA4, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1AB0, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1ABC, size 0x4, align 4
    int32 scepter_height; // offset 0x1AC0, size 0x4, align 4
    int32 scepter_height_arcbuffer; // offset 0x1AC4, size 0x4, align 4
    int32 scepter_acceleration_z; // offset 0x1AC8, size 0x4, align 4
    int32 scepter_acceleration_horizontal; // offset 0x1ACC, size 0x4, align 4
};
