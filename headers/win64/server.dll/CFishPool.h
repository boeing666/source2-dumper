#pragma once

class CFishPool : public CBaseEntity /*0x0*/  // sizeof 0x4F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    int32 m_fishCount; // offset 0x4B0, size 0x4, align 4
    float32 m_maxRange; // offset 0x4B4, size 0x4, align 4
    float32 m_swimDepth; // offset 0x4B8, size 0x4, align 4
    float32 m_waterLevel; // offset 0x4BC, size 0x4, align 4
    bool m_isDormant; // offset 0x4C0, size 0x1, align 1
    char _pad_04C1[0x7]; // offset 0x4C1
    CUtlVector< CHandle< CFish > > m_fishes; // offset 0x4C8, size 0x18, align 8
    CountdownTimer m_visTimer; // offset 0x4E0, size 0x18, align 255 | MNotSaved
};
