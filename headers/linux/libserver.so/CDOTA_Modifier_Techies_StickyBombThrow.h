#pragma once

class CDOTA_Modifier_Techies_StickyBombThrow : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    float32 m_flPredictedTotalTime; // offset 0x1A7C, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A80, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1A8C, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1A90, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1A94, size 0x1, align 1
    bool m_bDamageApplied; // offset 0x1A95, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1A96, size 0x1, align 1
    char _pad_1A97[0x1]; // offset 0x1A97
    Vector m_vHorizontalVelocity; // offset 0x1A98, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1AA4, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1AB0, size 0x4, align 4
    bool m_bDone; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    float32 radius; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
