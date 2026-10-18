#pragma once

class CAnimGraphDoc_MotionParameter  // sizeof 0x30, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlString m_name; // offset 0x18, size 0x8, align 8
    AnimParamID m_id; // offset 0x20, size 0x4, align 4
    float32 m_flMinValue; // offset 0x24, size 0x4, align 4
    float32 m_flMaxValue; // offset 0x28, size 0x4, align 4
    int32 m_nSamples; // offset 0x2C, size 0x4, align 4
};
