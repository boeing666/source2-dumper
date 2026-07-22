#pragma once

class CPointVelocitySensor : public CPointEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x778, size 0x4, align 4
    Vector m_vecAxis; // offset 0x77C, size 0xC, align 4
    bool m_bEnabled; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    float32 m_fPrevVelocity; // offset 0x78C, size 0x4, align 4
    float32 m_flAvgInterval; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CEntityOutputTemplate< float32 > m_Velocity; // offset 0x798, size 0x20, align 8
};
