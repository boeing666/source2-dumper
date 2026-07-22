#pragma once

class C_EconItemAttribute  // sizeof 0x38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    attrib_definition_index_t m_iAttributeDefinitionIndex; // offset 0x30, size 0x2, align 255
    char _pad_0032[0x2]; // offset 0x32
    float32 m_flValue; // offset 0x34, size 0x4, align 4
};
