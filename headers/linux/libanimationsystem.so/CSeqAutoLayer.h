#pragma once

class CSeqAutoLayer  // sizeof 0x1C, align 0x4 [trivial_dtor] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    int16 m_nLocalReference; // offset 0x0, size 0x2, align 2
    int16 m_nLocalPose; // offset 0x2, size 0x2, align 2
    CSeqAutoLayerFlag m_flags; // offset 0x4, size 0x8, align 1
    float32 m_start; // offset 0xC, size 0x4, align 4
    float32 m_peak; // offset 0x10, size 0x4, align 4
    float32 m_tail; // offset 0x14, size 0x4, align 4
    float32 m_end; // offset 0x18, size 0x4, align 4
};
