#pragma once

class CFuncTimescale : public CBaseEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    float32 m_flDesiredTimescale; // offset 0x4A0, size 0x4, align 4
    float32 m_flAcceleration; // offset 0x4A4, size 0x4, align 4
    float32 m_flMinBlendRate; // offset 0x4A8, size 0x4, align 4
    float32 m_flBlendDeltaMultiplier; // offset 0x4AC, size 0x4, align 4
    bool m_isStarted; // offset 0x4B0, size 0x1, align 1 | MNotSaved
    char _pad_04B1[0x7]; // offset 0x4B1
};
