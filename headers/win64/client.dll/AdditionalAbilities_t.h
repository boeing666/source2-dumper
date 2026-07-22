#pragma once

struct AdditionalAbilities_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strTitle; // offset 0x0, size 0x8, align 8
    CUtlVector< CSubclassName< 4 > > m_vecAbilityNames; // offset 0x8, size 0x18, align 8
};
