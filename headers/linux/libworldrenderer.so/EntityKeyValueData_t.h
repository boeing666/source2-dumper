#pragma once

struct EntityKeyValueData_t  // sizeof 0x38, align 0x8 [vtable] (worldrenderer) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< EntityIOConnectionData_t > m_connections; // offset 0x8, size 0x18, align 8
    CUtlBinaryBlock m_keyValuesData; // offset 0x20, size 0x10, align 8
    char _pad_0030[0x8]; // offset 0x30
};
