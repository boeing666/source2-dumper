#pragma once

class CAnimGraphDoc_TagSpan  // sizeof 0x30, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    AnimTagID m_id; // offset 0x20, size 0x4, align 4
    float32 m_fStartCycle; // offset 0x24, size 0x4, align 4
    float32 m_fDuration; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
