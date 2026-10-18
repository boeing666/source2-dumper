#pragma once

class CAnimGraphDoc_SequenceBlend2DItem : public CAnimGraphDoc_Blend2DItem /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyElementNameFn}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // offset 0x38, size 0x18, align 8 | MPropertySuppressField
    CUtlString m_sequenceName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
