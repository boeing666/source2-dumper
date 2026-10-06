#pragma once

class CCitadel_Modifier_Knockdown : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    QAngle m_angStunAngles; // offset 0x140, size 0xC, align 4
    int32 m_ePreferredKnockdownType; // offset 0x14C, size 0x4, align 4
    bool m_bForceTakePreferred; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x3]; // offset 0x151
    GameTime_t m_flGetUpAnimTime; // offset 0x154, size 0x4, align 255
    bool m_bGetUpCamSeqStarted; // offset 0x158, size 0x1, align 1
    char _pad_0159[0x3]; // offset 0x159
    float32 m_flOnGroundDuration; // offset 0x15C, size 0x4, align 4
    SatVolumeIndex_t m_satIndex; // offset 0x160, size 0x4, align 255
    char _pad_0164[0x4]; // offset 0x164
};
