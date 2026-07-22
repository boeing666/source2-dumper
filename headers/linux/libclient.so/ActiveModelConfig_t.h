#pragma once

struct ActiveModelConfig_t  // sizeof 0x70, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x30]; // offset 0x0
    ModelConfigHandle_t m_Handle; // offset 0x30, size 0x4, align 255
    char _pad_0034[0x4]; // offset 0x34
    CUtlSymbolLarge m_Name; // offset 0x38, size 0x8, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_AssociatedEntities; // offset 0x40, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // offset 0x58, size 0x18, align 8
};
