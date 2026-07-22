#pragma once

struct AI_FreePassParams_t  // sizeof 0x30, align 0xFF [vtable trivial_dtor] (server)
{
    char _pad_0000[0x8]; // offset 0x0
    float32 timeToTrigger; // offset 0x8, size 0x4, align 4
    float32 duration; // offset 0xC, size 0x4, align 4
    float32 moveTolerance; // offset 0x10, size 0x4, align 4
    float32 refillRate; // offset 0x14, size 0x4, align 4
    float32 coverDist; // offset 0x18, size 0x4, align 4
    float32 peekTime; // offset 0x1C, size 0x4, align 4
    float32 peekTimeAfterDamage; // offset 0x20, size 0x4, align 4
    float32 peekEyeDist; // offset 0x24, size 0x4, align 4
    float32 peekEyeDistZ; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
