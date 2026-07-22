#pragma once

class CAnimGraphDoc_SelectorNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CUtlVector< CAnimGraphDoc_NodeConnection > m_children; // offset 0x40, size 0x18, align 8 | MPropertySuppressField
    CAnimGraphDoc_NodeConnection m_fallbackChild; // offset 0x58, size 0x8, align 4 | MPropertySuppressField
    CUtlVector< AnimTagID > m_tags; // offset 0x60, size 0x18, align 8 | MPropertySuppressField
    SelectionSource_t m_selectionSource; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_007C[0x4]; // offset 0x7C
    CUtlString m_boolParamName; // offset 0x80, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_boolParamID; // offset 0x88, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    char _pad_008C[0x4]; // offset 0x8C
    CUtlString m_enumParamName; // offset 0x90, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_enumParamID; // offset 0x98, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    AnimTagID m_tagID; // offset 0x9C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    CFloatAnimValue m_blendDuration; // offset 0xA0, size 0x20, align 8 | MPropertyFriendlyName
    SelectorTagBehavior_t m_tagBehavior; // offset 0xC0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bResetOnChange; // offset 0xC4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSyncCyclesOnChange; // offset 0xC5, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLockWhenWaning; // offset 0xC6, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_00C7[0x1]; // offset 0xC7
    CBlendCurve m_blendCurve; // offset 0xC8, size 0x8, align 4 | MPropertySuppressField
};
