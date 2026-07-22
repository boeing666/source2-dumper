#pragma once

class CSeqMultiFetch  // sizeof 0x70, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CSeqMultiFetchFlag m_flags; // offset 0x0, size 0x6, align 1
    char _pad_0006[0x2]; // offset 0x6
    CUtlVector< int16 > m_localReferenceArray; // offset 0x8, size 0x18, align 8
    int32[2] m_nGroupSize; // offset 0x20, size 0x8, align 4
    int32[2] m_nLocalPose; // offset 0x28, size 0x8, align 4
    CUtlVector< float32 > m_poseKeyArray0; // offset 0x30, size 0x18, align 8
    CUtlVector< float32 > m_poseKeyArray1; // offset 0x48, size 0x18, align 8
    int32 m_nLocalCyclePoseParameter; // offset 0x60, size 0x4, align 4
    bool m_bCalculatePoseParameters; // offset 0x64, size 0x1, align 1
    bool m_bFixedBlendWeight; // offset 0x65, size 0x1, align 1
    char _pad_0066[0x2]; // offset 0x66
    float32[2] m_flFixedBlendWeightVals; // offset 0x68, size 0x8, align 4
};
