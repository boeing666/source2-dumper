#pragma once

class CFollowPathUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x74]; // offset 0x0
    float32 m_flBlendOutTime; // offset 0x74, size 0x4, align 4
    bool m_bBlockNonPathMovement; // offset 0x78, size 0x1, align 1
    bool m_bStopFeetAtGoal; // offset 0x79, size 0x1, align 1
    bool m_bScaleSpeed; // offset 0x7A, size 0x1, align 1
    char _pad_007B[0x1]; // offset 0x7B
    float32 m_flScale; // offset 0x7C, size 0x4, align 4
    float32 m_flMinAngle; // offset 0x80, size 0x4, align 4
    float32 m_flMaxAngle; // offset 0x84, size 0x4, align 4
    float32 m_flSpeedScaleBlending; // offset 0x88, size 0x4, align 4
    char _pad_008C[0x4]; // offset 0x8C
    CAnimInputDamping m_turnDamping; // offset 0x90, size 0x18, align 8
    AnimValueSource m_facingTarget; // offset 0xA8, size 0x4, align 4
    CAnimParamHandle m_hParam; // offset 0xAC, size 0x2, align 1
    char _pad_00AE[0x2]; // offset 0xAE
    float32 m_flTurnToFaceOffset; // offset 0xB0, size 0x4, align 4
    bool m_bTurnToFace; // offset 0xB4, size 0x1, align 1
    char _pad_00B5[0x3]; // offset 0xB5
};
