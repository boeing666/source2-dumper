#pragma once

class CSingleFrameUpdateNode : public CLeafUpdateNode /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // offset 0x58, size 0x18, align 8
    CPoseHandle m_hPoseCacheHandle; // offset 0x70, size 0x4, align 2
    HSequence m_hSequence; // offset 0x74, size 0x4, align 255
    float32 m_flCycle; // offset 0x78, size 0x4, align 4
    char _pad_007C[0x4]; // offset 0x7C
};
