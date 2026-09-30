#pragma once

class CPointVelocitySensor : public CPointEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x4B0, size 0x4, align 4
    Vector m_vecAxis; // offset 0x4B4, size 0xC, align 4
    bool m_bEnabled; // offset 0x4C0, size 0x1, align 1
    char _pad_04C1[0x3]; // offset 0x4C1
    float32 m_fPrevVelocity; // offset 0x4C4, size 0x4, align 4
    float32 m_flAvgInterval; // offset 0x4C8, size 0x4, align 4
    char _pad_04CC[0x4]; // offset 0x4CC
    CEntityOutputTemplate< float32 > m_Velocity; // offset 0x4D0, size 0x20, align 8
};
