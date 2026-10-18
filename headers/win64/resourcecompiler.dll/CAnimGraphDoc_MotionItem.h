#pragma once

class CAnimGraphDoc_MotionItem  // sizeof 0xA8, align 0xFF [vtable abstract] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CAnimGraphDoc_MotionParameterManager m_paramManager; // offset 0x28, size 0x28, align 8 | MPropertySuppressField
    CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_blockSpans; // offset 0x50, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // offset 0x68, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans; // offset 0x80, size 0x18, align 8 | MPropertySuppressField
    char _pad_0098[0x8]; // offset 0x98
    bool m_bLoop; // offset 0xA0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_00A1[0x7]; // offset 0xA1
};
