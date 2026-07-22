#pragma once

class CCurvesColorCorrectionLayer : public CColorCorrectionLayer /*0x0*/  // sizeof 0xE8, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CUtlVector< Vector2D > m_curvePointsRGB; // offset 0x28, size 0x18, align 8
    CUtlVector< Vector2D > m_curvePointsR; // offset 0x40, size 0x18, align 8
    CUtlVector< Vector2D > m_curvePointsG; // offset 0x58, size 0x18, align 8
    CUtlVector< Vector2D > m_curvePointsB; // offset 0x70, size 0x18, align 8
    char _pad_0088[0x60]; // offset 0x88
};
