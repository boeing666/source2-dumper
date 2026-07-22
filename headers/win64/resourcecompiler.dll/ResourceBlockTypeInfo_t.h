#pragma once

struct ResourceBlockTypeInfo_t  // sizeof 0x20, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
    ResourceDataEncodingType_t m_Encoding; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_BlockID; // offset 0x8, size 0x8, align 8
    CUtlString m_IntrospectedRootStruct; // offset 0x10, size 0x8, align 8
    int32 m_ResourceVersion; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
