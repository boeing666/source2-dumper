#pragma once

struct AbilitySectionInfo_t  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CUtlString m_strLocString; // offset 0x0, size 0x8, align 8 | MPropertyDescription
    CUtlVector< SectionProperties_t > m_vecAbilityPropertiesBlock; // offset 0x8, size 0x18, align 8 | MPropertyDescription
    CUtlVector< CUtlString > m_vecBasicProperties; // offset 0x20, size 0x18, align 8 | MPropertyDescription
    CUtlString m_strAbilityPropertyUpgradeRequired; // offset 0x38, size 0x8, align 8 | MPropertyDescription
};
