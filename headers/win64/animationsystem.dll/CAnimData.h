#pragma once

class CAnimData  // sizeof 0x70, align 0x8 [vtable] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CBufferString m_name; // offset 0x10, size 0x10, align 8
    CUtlVector< CAnimDesc > m_animArray; // offset 0x20, size 0x18, align 8
    CUtlVector< CAnimDecoder > m_decoderArray; // offset 0x38, size 0x18, align 8
    int32 m_nMaxUniqueFrameIndex; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
    CUtlVector< CAnimFrameSegment > m_segmentArray; // offset 0x58, size 0x18, align 8
};
