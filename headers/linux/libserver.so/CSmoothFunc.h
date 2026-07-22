#pragma once

class CSmoothFunc  // sizeof 0x20, align 0x8 [vtable trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flSmoothAmplitude; // offset 0x8, size 0x4, align 4
    float32 m_flSmoothBias; // offset 0xC, size 0x4, align 4
    float32 m_flSmoothDuration; // offset 0x10, size 0x4, align 4
    float32 m_flSmoothRemainingTime; // offset 0x14, size 0x4, align 4
    int32 m_nSmoothDir; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
