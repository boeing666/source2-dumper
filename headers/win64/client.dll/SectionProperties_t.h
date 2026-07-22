#pragma once

struct SectionProperties_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CUtlString m_strPropertiesTitleLocString; // offset 0x0, size 0x8, align 8 | MPropertyDescription
    CUtlVector< AbilityPropertyInfo_t > m_vecAbilityProperties; // offset 0x8, size 0x18, align 8 | MPropertyDescription
};
