#pragma once

class CCitadel_Modifier_Knockdown : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0xF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC8]; // offset 0x0
    QAngle m_angStunAngles; // offset 0xC8, size 0xC, align 4
    EKnockDownTypes m_ePreferredKnockdownType; // offset 0xD4, size 0x4, align 4
    bool m_bForceTakePreferred; // offset 0xD8, size 0x1, align 1
    char _pad_00D9[0x3]; // offset 0xD9
    GameTime_t m_flGetUpAnimTime; // offset 0xDC, size 0x4, align 255
    bool m_bGetUpCamSeqStarted; // offset 0xE0, size 0x1, align 1
    char _pad_00E1[0x3]; // offset 0xE1
    float32 m_flOnGroundDuration; // offset 0xE4, size 0x4, align 4
    SatVolumeIndex_t m_satIndex; // offset 0xE8, size 0x4, align 255
    char _pad_00EC[0x4]; // offset 0xEC
};
