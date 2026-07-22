#pragma once

class CEnumAnimParameter : public CConcreteAnimParameter /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    uint8 m_defaultValue; // offset 0x80, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0081[0x7]; // offset 0x81
    CUtlVector< CUtlString > m_enumOptions; // offset 0x88, size 0x18, align 8 | MPropertyFriendlyName
    CUtlVector< uint64 > m_vecEnumReferenced; // offset 0xA0, size 0x18, align 8 | MPropertySuppressField
    char _pad_00B8[0x18]; // offset 0xB8
};
