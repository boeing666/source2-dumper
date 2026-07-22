#pragma once

class CMoverUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    CAnimInputDamping m_damping; // offset 0x78, size 0x18, align 8
    AnimValueSource m_facingTarget; // offset 0x90, size 0x4, align 4
    CAnimParamHandle m_hMoveVecParam; // offset 0x94, size 0x2, align 1
    CAnimParamHandle m_hMoveHeadingParam; // offset 0x96, size 0x2, align 1
    CAnimParamHandle m_hTurnToFaceParam; // offset 0x98, size 0x2, align 1
    char _pad_009A[0x2]; // offset 0x9A
    float32 m_flTurnToFaceOffset; // offset 0x9C, size 0x4, align 4
    float32 m_flTurnToFaceLimit; // offset 0xA0, size 0x4, align 4
    bool m_bAdditive; // offset 0xA4, size 0x1, align 1
    bool m_bApplyMovement; // offset 0xA5, size 0x1, align 1
    bool m_bOrientMovement; // offset 0xA6, size 0x1, align 1
    bool m_bApplyRotation; // offset 0xA7, size 0x1, align 1
    bool m_bLimitOnly; // offset 0xA8, size 0x1, align 1
    char _pad_00A9[0x7]; // offset 0xA9
};
