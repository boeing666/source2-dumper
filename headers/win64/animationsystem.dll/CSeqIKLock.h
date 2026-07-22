#pragma once

class CSeqIKLock  // sizeof 0xC, align 0x4 [trivial_dtor] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    float32 m_flPosWeight; // offset 0x0, size 0x4, align 4
    float32 m_flAngleWeight; // offset 0x4, size 0x4, align 4
    int16 m_nLocalBone; // offset 0x8, size 0x2, align 2
    bool m_bBonesOrientedAlongPositiveX; // offset 0xA, size 0x1, align 1
    char _pad_000B[0x1]; // offset 0xB
};
