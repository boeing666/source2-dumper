#pragma once

struct MaterialParamInt_t : public MaterialParam_t /*0x0*/  // sizeof 0x10, align 0x8 (exportsystem) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nValue; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
