#pragma once

struct WorldNodeOnDiskBufferData_t  // sizeof 0x38, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
    int32 m_nElementCount; // offset 0x0, size 0x4, align 4
    int32 m_nElementSizeInBytes; // offset 0x4, size 0x4, align 4
    CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // offset 0x8, size 0x18, align 8
    CUtlVector< uint8 > m_pData; // offset 0x20, size 0x18, align 8
};
