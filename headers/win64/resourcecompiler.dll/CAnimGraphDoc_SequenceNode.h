#pragma once

class CAnimGraphDoc_SequenceNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // offset 0x70, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans; // offset 0x88, size 0x18, align 8 | MPropertySuppressField
    CUtlString m_sequenceName; // offset 0xA0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_playbackSpeed; // offset 0xA8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLoop; // offset 0xAC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_00AD[0x3]; // offset 0xAD
};
