#pragma once

struct ConstantInfo_t  // sizeof 0x10, align 0x8 (mathlib_extended) {MGetKV3ClassDefaults}
{
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlStringToken m_nameToken; // offset 0x8, size 0x4, align 4
    float32 m_flValue; // offset 0xC, size 0x4, align 4
};
