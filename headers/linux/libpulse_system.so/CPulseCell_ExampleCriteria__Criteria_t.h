#pragma once

struct CPulseCell_ExampleCriteria::Criteria_t  // sizeof 0xC, align 0xFF [trivial_dtor] (pulse_system)
{
    float32 m_flFloatValue1; // offset 0x0, size 0x4, align 4
    float32 m_flFloatValue2; // offset 0x4, size 0x4, align 4
    bool m_bMyBool; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
};
