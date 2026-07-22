#pragma once

struct MaterialParamString_t : public MaterialParam_t /*0x0*/  // sizeof 0x10, align 0x8 (exportsystem) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_value; // offset 0x8, size 0x8, align 8
};
