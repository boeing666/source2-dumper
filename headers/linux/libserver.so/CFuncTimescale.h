#pragma once

class CFuncTimescale : public CBaseEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    float32 m_flDesiredTimescale; // offset 0x788, size 0x4, align 4
    float32 m_flAcceleration; // offset 0x78C, size 0x4, align 4
    float32 m_flMinBlendRate; // offset 0x790, size 0x4, align 4
    float32 m_flBlendDeltaMultiplier; // offset 0x794, size 0x4, align 4
    bool m_isStarted; // offset 0x798, size 0x1, align 1 | MNotSaved
    char _pad_0799[0x7]; // offset 0x799
};
