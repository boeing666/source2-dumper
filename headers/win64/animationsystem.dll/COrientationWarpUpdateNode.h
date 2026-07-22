#pragma once

class COrientationWarpUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0xC0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x74]; // offset 0x0
    OrientationWarpMode_t m_eMode; // offset 0x74, size 0x4, align 4
    CAnimParamHandle m_hTargetParam; // offset 0x78, size 0x2, align 1
    CAnimParamHandle m_hTargetPositionParam; // offset 0x7A, size 0x2, align 1
    CAnimParamHandle m_hFallbackTargetPositionParam; // offset 0x7C, size 0x2, align 1
    char _pad_007E[0x2]; // offset 0x7E
    OrientationWarpTargetOffsetMode_t m_eTargetOffsetMode; // offset 0x80, size 0x4, align 4
    float32 m_flTargetOffset; // offset 0x84, size 0x4, align 4
    CAnimParamHandle m_hTargetOffsetParam; // offset 0x88, size 0x2, align 1
    char _pad_008A[0x6]; // offset 0x8A
    CAnimInputDamping m_damping; // offset 0x90, size 0x18, align 8
    OrientationWarpRootMotionSource_t m_eRootMotionSource; // offset 0xA8, size 0x4, align 4
    float32 m_flMaxRootMotionScale; // offset 0xAC, size 0x4, align 4
    bool m_bEnablePreferredRotationDirection; // offset 0xB0, size 0x1, align 1
    char _pad_00B1[0x3]; // offset 0xB1
    AnimValueSource m_ePreferredRotationDirection; // offset 0xB4, size 0x4, align 4
    float32 m_flPreferredRotationThreshold; // offset 0xB8, size 0x4, align 4
    char _pad_00BC[0x4]; // offset 0xBC
};
