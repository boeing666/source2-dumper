#pragma once

struct HeroAbilityResourceDef_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strHUDSnippetName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strCantCastOutOfResourceToken; // offset 0x10, size 0x8, align 8 | MPropertyDescription
};
