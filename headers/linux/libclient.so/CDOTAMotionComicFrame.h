#pragma once

class CDOTAMotionComicFrame  // sizeof 0x10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataBase MVDataNodeType}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flAutoAdvanceDelay; // offset 0x8, size 0x4, align 4
    bool m_bFireEventOnStart; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
};
