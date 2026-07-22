#pragma once

class CAnimFrameSegment  // sizeof 0x20, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    int32 m_nUniqueFrameIndex; // offset 0x0, size 0x4, align 4
    uint32 m_nLocalElementMasks; // offset 0x4, size 0x4, align 4
    int32 m_nLocalChannel; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlBinaryBlock m_container; // offset 0x10, size 0x10, align 8
};
