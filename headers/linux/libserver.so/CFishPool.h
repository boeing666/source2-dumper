#pragma once

class CFishPool : public CBaseEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x794]; // offset 0x0
    int32 m_fishCount; // offset 0x794, size 0x4, align 4
    float32 m_maxRange; // offset 0x798, size 0x4, align 4
    float32 m_swimDepth; // offset 0x79C, size 0x4, align 4
    float32 m_waterLevel; // offset 0x7A0, size 0x4, align 4
    bool m_isDormant; // offset 0x7A4, size 0x1, align 1
    char _pad_07A5[0x3]; // offset 0x7A5
    CUtlVector< CHandle< CFish > > m_fishes; // offset 0x7A8, size 0x18, align 8
    CountdownTimer m_visTimer; // offset 0x7C0, size 0x18, align 8 | MNotSaved
};
