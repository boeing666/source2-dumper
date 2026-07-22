#pragma once

class CFishPool : public CBaseEntity /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B8]; // offset 0x0
    int32 m_fishCount; // offset 0x4B8, size 0x4, align 4
    float32 m_maxRange; // offset 0x4BC, size 0x4, align 4
    float32 m_swimDepth; // offset 0x4C0, size 0x4, align 4
    float32 m_waterLevel; // offset 0x4C4, size 0x4, align 4
    bool m_isDormant; // offset 0x4C8, size 0x1, align 1
    char _pad_04C9[0x7]; // offset 0x4C9
    CUtlVector< CHandle< CFish > > m_fishes; // offset 0x4D0, size 0x18, align 8
    CountdownTimer m_visTimer; // offset 0x4E8, size 0x18, align 8 | MNotSaved
};
