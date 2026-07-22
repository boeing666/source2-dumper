#pragma once

struct AbilityTooltipDetails_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CUtlVector< AbilitySectionInfo_t > m_vecAbilityInfoSections; // offset 0x0, size 0x18, align 8 | MPropertyDescription
    CUtlVector< CUtlString > m_vecAdditionalHeaderProperties; // offset 0x18, size 0x18, align 8 | MPropertyDescription
};
