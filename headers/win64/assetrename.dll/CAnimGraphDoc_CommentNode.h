#pragma once

class CAnimGraphDoc_CommentNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CUtlString m_commentText; // offset 0x40, size 0x8, align 8 | MPropertySuppressField
    Vector2D m_size; // offset 0x48, size 0x8, align 4 | MPropertySuppressField
    Color m_color; // offset 0x50, size 0x4, align 1 | MPropertyFriendlyName
    char _pad_0054[0x4]; // offset 0x54
};
