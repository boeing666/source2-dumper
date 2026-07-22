#pragma once

class CAnimFrameBlockAnim  // sizeof 0x20, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    int32 m_nStartFrame; // offset 0x0, size 0x4, align 4
    int32 m_nEndFrame; // offset 0x4, size 0x4, align 4
    CUtlVector< int32 > m_segmentIndexArray; // offset 0x8, size 0x18, align 8
};
