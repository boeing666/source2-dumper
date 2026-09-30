#pragma once

struct AbilityPropertyInfo_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MPropertyArrayElementNameKey}
{
    CUtlString m_strImportantProperty; // offset 0x0, size 0x8, align 8 | MPropertyDescription MPropertyLeafSuggestionProviderFn
    CUtlString m_strStatusEffectValue; // offset 0x8, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    bool m_bShowPropertyValue; // offset 0x10, size 0x1, align 1 | MPropertyDescription MPropertySuppressExpr
    char _pad_0011[0x7]; // offset 0x11
};
