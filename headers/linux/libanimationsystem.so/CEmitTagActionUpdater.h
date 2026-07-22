#pragma once

class CEmitTagActionUpdater : public CAnimActionUpdater /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    int32 m_nTagIndex; // offset 0x18, size 0x4, align 4
    bool m_bIsZeroDuration; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
};
