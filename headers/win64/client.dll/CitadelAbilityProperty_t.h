#pragma once

struct CitadelAbilityProperty_t  // sizeof 0xC8, align 0x8 (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_strValue; // offset 0x10, size 0x8, align 8 | MPropertyFlattenIntoParentRow MPropertyFlattenStretchFactor MPropertyFlattenIncludeLabel
    CUtlString m_strStreetBrawlValue; // offset 0x18, size 0x8, align 8 | MPropertyFlattenIntoParentRow MPropertyFlattenStretchFactor MPropertyFlattenIncludeLabel MPropertyFriendlyName
    char _pad_0020[0x8]; // offset 0x20
    CEmbeddedSubclass< CScaleFunctionBase > m_subclassScaleFunction; // offset 0x28, size 0x10, align 8
    CEmbeddedSubclass< CScaleFunctionBase > m_subclassScaleFunctionStreetBrawl; // offset 0x38, size 0x10, align 8
    char _pad_0048[0x14]; // offset 0x48
    EModifierValue m_eProvidedPropertyType; // offset 0x5C, size 0x4, align 4 | MPropertyDescription
    PropertyValueApplyFilter_t m_eApplyFilter; // offset 0x60, size 0x4, align 4 | MPropertyDescription
    char _pad_0064[0x4]; // offset 0x64
    CUtlString m_strDisableValue; // offset 0x68, size 0x8, align 8 | MPropertyDescription
    bool m_bDamageAffectedByEffectiveness; // offset 0x70, size 0x1, align 1 | MPropertyDescription
    bool m_bReturnZeroIfUnupgraded; // offset 0x71, size 0x1, align 1 | MPropertyDescription
    char _pad_0072[0x2]; // offset 0x72
    EStatsType m_eDisplayType; // offset 0x74, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    ModifierValueDisplayUnits_t m_eDisplayUnits; // offset 0x78, size 0x4, align 4
    bool m_bIsHidden; // offset 0x7C, size 0x1, align 1 | MPropertyDescription
    bool m_bIsNegativeAttribute; // offset 0x7D, size 0x1, align 1 | MPropertyDescription
    char _pad_007E[0x2]; // offset 0x7E
    CUtlString m_strCSSClass; // offset 0x80, size 0x8, align 8 | MPropertyFriendlyName MPropertyLeafSuggestionProviderFn
    CUtlString m_strLocTokenOverride; // offset 0x88, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    bool m_bCanSetTokenOverride; // offset 0x90, size 0x1, align 1 | MPropertySuppressField
    char _pad_0091[0x7]; // offset 0x91
    CUtlString m_strConditionalLocTokenOverride; // offset 0x98, size 0x8, align 8 | MPropertyDescription
    bool m_bRoundDown; // offset 0xA0, size 0x1, align 1 | MPropertyDescription
    bool m_bIsAbilityDamageProperty; // offset 0xA1, size 0x1, align 1 | MPropertyDescription
    char _pad_00A2[0x2]; // offset 0xA2
    StatsUsageFlags_t m_eStatsUsageFlags; // offset 0xA4, size 0x4, align 4
    char _pad_00A8[0x20]; // offset 0xA8
};
