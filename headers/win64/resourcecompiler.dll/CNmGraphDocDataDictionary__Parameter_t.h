#pragma once

struct CNmGraphDocDataDictionary::Parameter_t  // sizeof 0x40, align 0x8 (animdoclib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    V_uuid_t m_ID; // offset 0x0, size 0x10, align 4 | MPropertySuppressField
    CUtlString m_name; // offset 0x10, size 0x8, align 8 | MPropertyFlattenIntoParentRow
    CUtlString m_groupName; // offset 0x18, size 0x8, align 8
    NmGraphValueType_t m_valueType; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
    CUtlVector< CGlobalSymbol > m_expectedValues; // offset 0x28, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyAttrStateCallback
};
