#pragma once

struct MaterialParamBuffer_t : public MaterialParam_t /*0x0*/  // sizeof 0x18, align 0x8 (materialsystem2) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlBinaryBlock m_value; // offset 0x8, size 0x10, align 8
};
