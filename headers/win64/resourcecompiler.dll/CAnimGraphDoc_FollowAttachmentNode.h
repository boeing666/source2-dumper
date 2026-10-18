#pragma once

class CAnimGraphDoc_FollowAttachmentNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    CUtlString m_boneName; // offset 0x48, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_attachmentName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bMatchTranslation; // offset 0x58, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bMatchRotation; // offset 0x59, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_005A[0x6]; // offset 0x5A
};
