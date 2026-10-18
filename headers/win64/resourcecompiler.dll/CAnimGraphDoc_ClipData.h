#pragma once

class CAnimGraphDoc_ClipData  // sizeof 0x48, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // offset 0x20, size 0x18, align 8 | MPropertySuppressField
    CUtlString m_clipName; // offset 0x38, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0040[0x8]; // offset 0x40
};
