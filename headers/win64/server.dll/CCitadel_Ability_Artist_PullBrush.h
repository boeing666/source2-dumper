#pragma once

class CCitadel_Ability_Artist_PullBrush : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1608]; // offset 0x0
    float32 m_flAccumulatedDrawDistance; // offset 0x1608, size 0x4, align 4
    bool m_bPainting; // offset 0x160C, size 0x1, align 1
    char _pad_160D[0x3]; // offset 0x160D
    GameTime_t m_tStopPaintingTime; // offset 0x1610, size 0x4, align 255
    char _pad_1614[0xC]; // offset 0x1614
    CUtlVector< VectorWS > m_vecBrushPositions; // offset 0x1620, size 0x18, align 8
    char _pad_1638[0x1C]; // offset 0x1638
    Vector m_vecBrushVelocity; // offset 0x1654, size 0xC, align 4
    VectorWS m_vecBrushCurrentPosition; // offset 0x1660, size 0xC, align 4
    char _pad_166C[0x2DC]; // offset 0x166C
};
