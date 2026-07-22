#pragma once

class CAnimLocalHierarchy  // sizeof 0x30, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_sBone; // offset 0x0, size 0x10, align 8
    CBufferString m_sNewParent; // offset 0x10, size 0x10, align 8
    int32 m_nStartFrame; // offset 0x20, size 0x4, align 4
    int32 m_nPeakFrame; // offset 0x24, size 0x4, align 4
    int32 m_nTailFrame; // offset 0x28, size 0x4, align 4
    int32 m_nEndFrame; // offset 0x2C, size 0x4, align 4
};
