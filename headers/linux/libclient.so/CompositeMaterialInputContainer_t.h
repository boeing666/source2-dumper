#pragma once

struct CompositeMaterialInputContainer_t  // sizeof 0x138, align 0x8 (compositematerialslib) {MGetKV3ClassDefaults MPropertyElementNameFn}
{
    bool m_bEnabled; // offset 0x0, size 0x1, align 1 | MPropertyAutoRebuildOnChange MPropertyFriendlyName
    char _pad_0001[0x3]; // offset 0x1
    CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType; // offset 0x4, size 0x4, align 4 | MPropertyAutoRebuildOnChange MPropertyFriendlyName MPropertyAttrStateCallback
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_strSpecificContainerMaterial; // offset 0x8, size 0xE0, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strAttrName; // offset 0xE8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strAlias; // offset 0xF0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlVector< CompositeMaterialInputLooseVariable_t > m_vecLooseVariables; // offset 0xF8, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strAttrNameForVar; // offset 0x110, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bExposeExternally; // offset 0x118, size 0x1, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0119[0x1F]; // offset 0x119
};
