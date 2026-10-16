#pragma once

class CCitadel_Ability_Artist_PullBrush : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1928, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1600]; // offset 0x0
    float32 m_flAccumulatedDrawDistance; // offset 0x1600, size 0x4, align 4
    bool m_bPainting; // offset 0x1604, size 0x1, align 1
    char _pad_1605[0x3]; // offset 0x1605
    GameTime_t m_tStopPaintingTime; // offset 0x1608, size 0x4, align 255
    char _pad_160C[0xC]; // offset 0x160C
    CUtlVector< VectorWS > m_vecBrushPositions; // offset 0x1618, size 0x18, align 8
    char _pad_1630[0x1C]; // offset 0x1630
    Vector m_vecBrushVelocity; // offset 0x164C, size 0xC, align 4
    VectorWS m_vecBrushCurrentPosition; // offset 0x1658, size 0xC, align 4
    char _pad_1664[0x2C4]; // offset 0x1664
};
