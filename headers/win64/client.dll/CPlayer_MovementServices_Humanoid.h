#pragma once

class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices /*0x0*/  // sizeof 0x288, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x258]; // offset 0x0
    float32 m_flStepSoundTime; // offset 0x258, size 0x4, align 4
    float32 m_flFallVelocity; // offset 0x25C, size 0x4, align 4
    Vector m_groundNormal; // offset 0x260, size 0xC, align 4 | MNotSaved
    float32 m_flSurfaceFriction; // offset 0x26C, size 0x4, align 4
    CUtlStringToken m_surfaceProps; // offset 0x270, size 0x4, align 4 | MNotSaved
    char _pad_0274[0xC]; // offset 0x274
    int32 m_nStepside; // offset 0x280, size 0x4, align 4
    char _pad_0284[0x4]; // offset 0x284
};
