#pragma once

class CAnimActivity  // sizeof 0x20, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_name; // offset 0x0, size 0x10, align 8
    int32 m_nActivity; // offset 0x10, size 0x4, align 4
    int32 m_nFlags; // offset 0x14, size 0x4, align 4
    int32 m_nWeight; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
