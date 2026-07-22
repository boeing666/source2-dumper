#pragma once

struct SectionAttributes_t  // sizeof 0x58, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CUtlString m_strLocString; // offset 0x0, size 0x8, align 8 | MPropertyDescription
    CUtlVector< AbilityPropertyInfo_t > m_vecImportantAbilityProperties; // offset 0x8, size 0x18, align 8 | MPropertyDescription MPropertyAutoExpandSelf
    bool m_bRemoveAttributesBackgroundColor; // offset 0x20, size 0x1, align 1 | MPropertyDescription
    char _pad_0021[0x7]; // offset 0x21
    CUtlVector< CUtlString > m_vecElevatedAbilityProperties; // offset 0x28, size 0x18, align 8 | MPropertyDescription MPropertyAutoExpandSelf MPropertyFriendlyName
    CUtlVector< CUtlString > m_vecAbilityProperties; // offset 0x40, size 0x18, align 8 | MPropertyDescription MPropertyAutoExpandSelf
};
