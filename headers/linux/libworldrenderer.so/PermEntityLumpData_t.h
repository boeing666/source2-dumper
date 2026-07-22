#pragma once

struct PermEntityLumpData_t  // sizeof 0x38, align 0x8 [vtable] (worldrenderer) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_name; // offset 0x8, size 0x8, align 8
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // offset 0x10, size 0x18, align 8
    CUtlLeanVector< EntityKeyValueData_t > m_entityKeyValues; // offset 0x28, size 0x10, align 8
};
