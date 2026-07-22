#pragma once

class CAnimEncodedFrames  // sizeof 0xD8, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_fileName; // offset 0x0, size 0x10, align 8
    int32 m_nFrames; // offset 0x10, size 0x4, align 4
    int32 m_nFramesPerBlock; // offset 0x14, size 0x4, align 4
    CUtlVector< CAnimFrameBlockAnim > m_frameblockArray; // offset 0x18, size 0x18, align 8
    CAnimEncodeDifference m_usageDifferences; // offset 0x30, size 0xA8, align 8
};
