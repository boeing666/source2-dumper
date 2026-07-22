#pragma once

class CTargetSelectorUpdateNode : public CAnimUpdateNodeBase /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    TargetSelectorAngleMode_t m_eAngleMode; // offset 0x60, size 0x4, align 4
    char _pad_0064[0x4]; // offset 0x64
    CUtlVector< CAnimUpdateNodeRef > m_children; // offset 0x68, size 0x18, align 8
    char _pad_0080[0x4]; // offset 0x80
    CAnimParamHandle m_hTargetPosition; // offset 0x84, size 0x2, align 1
    CAnimParamHandle m_hTargetFacePositionParameter; // offset 0x86, size 0x2, align 1
    CAnimParamHandle m_hMoveHeadingParameter; // offset 0x88, size 0x2, align 1
    CAnimParamHandle m_hDesiredMoveHeadingParameter; // offset 0x8A, size 0x2, align 1
    bool m_bTargetPositionIsWorldSpace; // offset 0x8C, size 0x1, align 1
    bool m_bTargetFacePositionIsWorldSpace; // offset 0x8D, size 0x1, align 1
    bool m_bEnablePhaseMatching; // offset 0x8E, size 0x1, align 1
    char _pad_008F[0x1]; // offset 0x8F
    float32 m_flPhaseMatchingMaxRootMotionSkip; // offset 0x90, size 0x4, align 4
    char _pad_0094[0xC]; // offset 0x94
};
