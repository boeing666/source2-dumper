#pragma once

class CFishPool : public CBaseEntity /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4C0]; // offset 0x0
    int32 m_fishCount; // offset 0x4C0, size 0x4, align 4
    float32 m_maxRange; // offset 0x4C4, size 0x4, align 4
    float32 m_swimDepth; // offset 0x4C8, size 0x4, align 4
    float32 m_waterLevel; // offset 0x4CC, size 0x4, align 4
    bool m_isDormant; // offset 0x4D0, size 0x1, align 1
    char _pad_04D1[0x7]; // offset 0x4D1
    CUtlVector< CHandle< CFish > > m_fishes; // offset 0x4D8, size 0x18, align 8
    CountdownTimer m_visTimer; // offset 0x4F0, size 0x18, align 8 | MNotSaved
};
