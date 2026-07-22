#pragma once

class CNmGraphDocCommentNode : public CNmGraphDocNode /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    Vector2D m_size; // offset 0x50, size 0x8, align 4
    CUtlString m_comment; // offset 0x58, size 0x8, align 8
    Color m_nodeColor; // offset 0x60, size 0x4, align 1
    char _pad_0064[0x4]; // offset 0x64
};
