#pragma once

struct CitadelAbilityHUDElement_t  // sizeof 0x110, align 0x8 (client) {MGetKV3ClassDefaults MPropertyArrayElementNameKey}
{
    ECitadelAbilityHUDElementType_t m_eType; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_strContext; // offset 0x8, size 0x8, align 8
    char _pad_0010[0x8]; // offset 0x10
    CUtlString m_strAdditionalClasses; // offset 0x18, size 0x8, align 8 | MPropertyDescription
    CUtlString m_Layout; // offset 0x20, size 0x8, align 8 | MPropertyCustomFGDType MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCPanoramaStyle > > m_Style; // offset 0x28, size 0xE0, align 8 | MPropertySuppressExpr
    bool m_bReverseProgress; // offset 0x108, size 0x1, align 1 | MPropertySuppressExpr
    bool m_bShowStacksOnProgress; // offset 0x109, size 0x1, align 1 | MPropertySuppressExpr
    char _pad_010A[0x6]; // offset 0x10A
};
