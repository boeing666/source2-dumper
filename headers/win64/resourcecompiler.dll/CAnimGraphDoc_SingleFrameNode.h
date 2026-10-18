#pragma once

class CAnimGraphDoc_SingleFrameNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlString m_sequenceName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    SingleFrameSelection m_eFrameSelection; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    int32 m_nFrameIndex; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlVector< CSmartPtr< CAnimGraphDoc_Action > > m_actions; // offset 0x60, size 0x18, align 8
};
