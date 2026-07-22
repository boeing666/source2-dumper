#pragma once

class CFootAdjustmentUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    CUtlVector< HSequence > m_clips; // offset 0x78, size 0x18, align 8
    CPoseHandle m_hBasePoseCacheHandle; // offset 0x90, size 0x4, align 2
    CAnimParamHandle m_facingTarget; // offset 0x94, size 0x2, align 1
    char _pad_0096[0x2]; // offset 0x96
    float32 m_flTurnTimeMin; // offset 0x98, size 0x4, align 4
    float32 m_flTurnTimeMax; // offset 0x9C, size 0x4, align 4
    float32 m_flStepHeightMax; // offset 0xA0, size 0x4, align 4
    float32 m_flStepHeightMaxAngle; // offset 0xA4, size 0x4, align 4
    bool m_bResetChild; // offset 0xA8, size 0x1, align 1
    bool m_bAnimationDriven; // offset 0xA9, size 0x1, align 1
    char _pad_00AA[0x6]; // offset 0xAA
};
