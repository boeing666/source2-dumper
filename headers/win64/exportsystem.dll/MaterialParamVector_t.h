#pragma once

struct MaterialParamVector_t : public MaterialParam_t /*0x0*/  // sizeof 0x18, align 0x8 (exportsystem) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    Vector4D m_value; // offset 0x8, size 0x10, align 4
};
