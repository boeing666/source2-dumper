#pragma once

class CCitadel_Ability_Artist_PullBrush : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1CA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16DC]; // offset 0x0
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x16DC, size 0x4, align 255
    char _pad_16E0[0x160]; // offset 0x16E0
    float32 m_flAccumulatedDrawDistance; // offset 0x1840, size 0x4, align 4
    char _pad_1844[0x74]; // offset 0x1844
    bool m_bPainting; // offset 0x18B8, size 0x1, align 1
    char _pad_18B9[0x3]; // offset 0x18B9
    GameTime_t m_tStopPaintingTime; // offset 0x18BC, size 0x4, align 255
    char _pad_18C0[0x10]; // offset 0x18C0
    CUtlVector< VectorWS > m_vecBrushPositions; // offset 0x18D0, size 0x18, align 8
    char _pad_18E8[0x20]; // offset 0x18E8
    Vector m_vecBrushVelocity; // offset 0x1908, size 0xC, align 4
    char _pad_1914[0x84]; // offset 0x1914
    VectorWS m_vecBrushCurrentPosition; // offset 0x1998, size 0xC, align 4
    char _pad_19A4[0x304]; // offset 0x19A4
};
