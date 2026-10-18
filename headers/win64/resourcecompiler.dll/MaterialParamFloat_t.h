#pragma once

struct MaterialParamFloat_t : public MaterialParam_t /*0x0*/  // sizeof 0x10, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flValue; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
