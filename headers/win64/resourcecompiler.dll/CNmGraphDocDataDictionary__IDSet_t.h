#pragma once

struct CNmGraphDocDataDictionary::IDSet_t  // sizeof 0x30, align 0x8 (animdoclib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    V_uuid_t m_ID; // offset 0x0, size 0x10, align 4 | MPropertySuppressField
    CUtlString m_name; // offset 0x10, size 0x8, align 8 | MPropertyFlattenIntoParentRow
    CUtlVector< CGlobalSymbol > m_graphIDs; // offset 0x18, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyFriendlyName
};
