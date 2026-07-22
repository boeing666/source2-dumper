#pragma once

struct CitadelAbilityHUDElementButtonHint_t  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults MPropertyArrayElementNameKey}
{
    CUtlString m_strContext; // offset 0x0, size 0x8, align 8
    char _pad_0008[0x4]; // offset 0x8
    EHUDElementButtonType_t m_eButtonHintType; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    InputBitMask_t m_nButton1; // offset 0x10, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    bool m_bButton1IsSlot; // offset 0x18, size 0x1, align 1
    char _pad_0019[0xF]; // offset 0x19
    InputBitMask_t m_nButton2; // offset 0x28, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    bool m_bButton2IsSlot; // offset 0x30, size 0x1, align 1
    char _pad_0031[0xF]; // offset 0x31
    EHUDElementButtonHintLocType_t m_eHintLocType; // offset 0x40, size 0x4, align 4 | MPropertyDescription
    char _pad_0044[0x4]; // offset 0x44
    CUtlString m_strLocToken; // offset 0x48, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    EHUDElementButtonHintSide_t m_eHintSide; // offset 0x50, size 0x4, align 4 | MPropertyDescription
    int32 m_nPriority; // offset 0x54, size 0x4, align 4 | MPropertyAttributeRange MPropertyDescription
    bool m_bShowAbilityIcon; // offset 0x58, size 0x1, align 1 | MPropertyDescription
    bool m_bIsHintShownWhileOnCooldown; // offset 0x59, size 0x1, align 1 | MPropertyDescription
    char _pad_005A[0x6]; // offset 0x5A
};
