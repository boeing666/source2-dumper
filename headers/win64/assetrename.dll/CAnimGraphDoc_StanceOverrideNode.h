#pragma once

class CAnimGraphDoc_StanceOverrideNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    CAnimGraphDoc_NodeConnection m_stanceSourceConnection; // offset 0x48, size 0x8, align 4 | MPropertySuppressField
    CUtlString m_blendParamName; // offset 0x50, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_blendParamID; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    StanceOverrideMode m_eMode; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    CUtlString m_sequenceName; // offset 0x60, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    int32 m_nFrameIndex; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_006C[0x4]; // offset 0x6C
};
