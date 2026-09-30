#pragma once

class CNmRootMotionEvent : public CNmEvent /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    float32 m_flBlendTimeSeconds; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
