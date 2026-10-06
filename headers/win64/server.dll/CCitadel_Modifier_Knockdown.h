#pragma once

class CCitadel_Modifier_Knockdown : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x170, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    QAngle m_angStunAngles; // offset 0x150, size 0xC, align 4
    int32 m_ePreferredKnockdownType; // offset 0x15C, size 0x4, align 4
    bool m_bForceTakePreferred; // offset 0x160, size 0x1, align 1
    char _pad_0161[0x3]; // offset 0x161
    GameTime_t m_flGetUpAnimTime; // offset 0x164, size 0x4, align 255
    bool m_bGetUpCamSeqStarted; // offset 0x168, size 0x1, align 1
    char _pad_0169[0x3]; // offset 0x169
    float32 m_flOnGroundDuration; // offset 0x16C, size 0x4, align 4
};
