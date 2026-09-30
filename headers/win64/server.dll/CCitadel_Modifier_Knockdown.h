#pragma once

class CCitadel_Modifier_Knockdown : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    QAngle m_angStunAngles; // offset 0x148, size 0xC, align 4
    int32 m_ePreferredKnockdownType; // offset 0x154, size 0x4, align 4
    bool m_bForceTakePreferred; // offset 0x158, size 0x1, align 1
    char _pad_0159[0x3]; // offset 0x159
    GameTime_t m_flGetUpAnimTime; // offset 0x15C, size 0x4, align 255
    bool m_bGetUpCamSeqStarted; // offset 0x160, size 0x1, align 1
    char _pad_0161[0x3]; // offset 0x161
    float32 m_flOnGroundDuration; // offset 0x164, size 0x4, align 4
};
