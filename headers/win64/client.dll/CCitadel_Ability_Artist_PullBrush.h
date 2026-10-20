#pragma once

class CCitadel_Ability_Artist_PullBrush : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1CB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E4]; // offset 0x0
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x16E4, size 0x4, align 255
    char _pad_16E8[0x160]; // offset 0x16E8
    float32 m_flAccumulatedDrawDistance; // offset 0x1848, size 0x4, align 4
    char _pad_184C[0x74]; // offset 0x184C
    bool m_bPainting; // offset 0x18C0, size 0x1, align 1
    char _pad_18C1[0x3]; // offset 0x18C1
    GameTime_t m_tStopPaintingTime; // offset 0x18C4, size 0x4, align 255
    char _pad_18C8[0x10]; // offset 0x18C8
    CUtlVector< VectorWS > m_vecBrushPositions; // offset 0x18D8, size 0x18, align 8
    char _pad_18F0[0x20]; // offset 0x18F0
    Vector m_vecBrushVelocity; // offset 0x1910, size 0xC, align 4
    char _pad_191C[0x84]; // offset 0x191C
    VectorWS m_vecBrushCurrentPosition; // offset 0x19A0, size 0xC, align 4
    char _pad_19AC[0x304]; // offset 0x19AC
};
