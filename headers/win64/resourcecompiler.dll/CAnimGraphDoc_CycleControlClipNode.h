#pragma once

class CAnimGraphDoc_CycleControlClipNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // offset 0x58, size 0x18, align 8 | MPropertySuppressField
    CUtlString m_sequenceName; // offset 0x70, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimValueSource m_valueSource; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    char _pad_007C[0x4]; // offset 0x7C
    CUtlString m_paramName; // offset 0x80, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_param; // offset 0x88, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bLockWhenWaning; // offset 0x8C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_008D[0x3]; // offset 0x8D
};
