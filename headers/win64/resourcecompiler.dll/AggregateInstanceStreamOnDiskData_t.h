#pragma once

struct AggregateInstanceStreamOnDiskData_t  // sizeof 0x18, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
    uint32 m_DecodedSize; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlBinaryBlock m_BufferData; // offset 0x8, size 0x10, align 8
};
