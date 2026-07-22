#pragma once

class CAnimGraphDebugReplay  // sizeof 0x70, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CUtlString m_animGraphFileName; // offset 0x40, size 0x8, align 8
    CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList; // offset 0x48, size 0x18, align 8
    int32 m_startIndex; // offset 0x60, size 0x4, align 4
    int32 m_writeIndex; // offset 0x64, size 0x4, align 4
    int32 m_frameCount; // offset 0x68, size 0x4, align 4
    char _pad_006C[0x4]; // offset 0x6C
};
