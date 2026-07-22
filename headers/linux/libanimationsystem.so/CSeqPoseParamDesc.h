#pragma once

class CSeqPoseParamDesc  // sizeof 0x20, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_sName; // offset 0x0, size 0x10, align 8
    float32 m_flStart; // offset 0x10, size 0x4, align 4
    float32 m_flEnd; // offset 0x14, size 0x4, align 4
    float32 m_flLoop; // offset 0x18, size 0x4, align 4
    bool m_bLooping; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
};
