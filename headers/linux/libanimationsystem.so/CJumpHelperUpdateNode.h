#pragma once

class CJumpHelperUpdateNode : public CSequenceUpdateNode /*0x0*/  // sizeof 0xD8, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xB0]; // offset 0x0
    CAnimParamHandle m_hTargetParam; // offset 0xB0, size 0x2, align 1
    char _pad_00B2[0x2]; // offset 0xB2
    Vector m_flOriginalJumpMovement; // offset 0xB4, size 0xC, align 4
    float32 m_flOriginalJumpDuration; // offset 0xC0, size 0x4, align 4
    float32 m_flJumpStartCycle; // offset 0xC4, size 0x4, align 4
    float32 m_flJumpEndCycle; // offset 0xC8, size 0x4, align 4
    JumpCorrectionMethod m_eCorrectionMethod; // offset 0xCC, size 0x4, align 4
    bool[3] m_bTranslationAxis; // offset 0xD0, size 0x3, align 1
    bool m_bScaleSpeed; // offset 0xD3, size 0x1, align 1
    char _pad_00D4[0x4]; // offset 0xD4
};
