#pragma once

class CAnimGraphDoc_FollowTargetNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    CUtlString m_boneName; // offset 0x48, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    IKTargetSettings_t m_TargetSettings; // offset 0x50, size 0x28, align 255 | MPropertyFriendlyName MPropertyAutoExpandSelf
    bool m_bMatchTargetOrientation; // offset 0x78, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0079[0x7]; // offset 0x79
};
