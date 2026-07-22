#pragma once

class CAnimGraphDoc_Blend2DNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_Blend2DItem > > m_items; // offset 0x58, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // offset 0x70, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans; // offset 0x88, size 0x18, align 8 | MPropertySuppressField
    AnimValueSource m_blendSourceX; // offset 0xA0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    char _pad_00A4[0x4]; // offset 0xA4
    CUtlString m_paramNameX; // offset 0xA8, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_paramX; // offset 0xB0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimValueSource m_blendSourceY; // offset 0xB4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    CUtlString m_paramNameY; // offset 0xB8, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_paramY; // offset 0xC0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Blend2DMode m_eBlendMode; // offset 0xC4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLoop; // offset 0xC8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLockBlendOnReset; // offset 0xC9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLockWhenWaning; // offset 0xCA, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_00CB[0x1]; // offset 0xCB
    float32 m_playbackSpeed; // offset 0xCC, size 0x4, align 4 | MPropertyFriendlyName
    CAnimInputDamping m_damping; // offset 0xD0, size 0x18, align 8 | MPropertyFriendlyName
    bool m_bAnimEventsAndTagsOnMostWeightedOnly; // offset 0xE8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_00E9[0x7]; // offset 0xE9
};
