#pragma once

struct CAttributeManager::cached_attribute_float_t  // sizeof 0x18, align 0xFF [trivial_dtor] (client)
{
    float32 flIn; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlSymbolLarge iAttribHook; // offset 0x8, size 0x8, align 8
    float32 flOut; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
