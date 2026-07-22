#pragma once

struct AmmoTypeInfo_t  // sizeof 0x38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x10]; // offset 0x0
    int32 m_nMaxCarry; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x8]; // offset 0x14
    CRangeInt m_nSplashSize; // offset 0x1C, size 0x8, align 255
    AmmoFlags_t m_nFlags; // offset 0x24, size 0x4, align 4
    float32 m_flMass; // offset 0x28, size 0x4, align 4
    CRangeFloat m_flSpeed; // offset 0x2C, size 0x8, align 255
    char _pad_0034[0x4]; // offset 0x34
};
