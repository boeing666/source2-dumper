#pragma once

struct constraint_breakableparams_t  // sizeof 0x18, align 0xFF [trivial_dtor] (client)
{
    float32 strength; // offset 0x0, size 0x4, align 4
    float32 forceLimit; // offset 0x4, size 0x4, align 4
    float32 torqueLimit; // offset 0x8, size 0x4, align 4
    float32[2] bodyMassScale; // offset 0xC, size 0x8, align 4
    bool isActive; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
};
