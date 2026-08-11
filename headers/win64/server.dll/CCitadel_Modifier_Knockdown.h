#pragma once

class CCitadel_Modifier_Knockdown : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0xF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    QAngle m_angStunAngles; // offset 0xD8, size 0xC, align 4
    EKnockDownTypes m_ePreferredKnockdownType; // offset 0xE4, size 0x4, align 4
    bool m_bForceTakePreferred; // offset 0xE8, size 0x1, align 1
    char _pad_00E9[0x3]; // offset 0xE9
    GameTime_t m_flGetUpAnimTime; // offset 0xEC, size 0x4, align 255
    bool m_bGetUpCamSeqStarted; // offset 0xF0, size 0x1, align 1
    char _pad_00F1[0x3]; // offset 0xF1
    float32 m_flOnGroundDuration; // offset 0xF4, size 0x4, align 4
};
