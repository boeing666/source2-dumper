#pragma once

struct CNmGraphDocStateNode::StateEvent_t  // sizeof 0x10, align 0x8 [trivial_dtor] (animdoclib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8 | MPropertyAttributeEditor
    bool m_bIsEntry; // offset 0x8, size 0x1, align 1
    bool m_bIsFullyInState; // offset 0x9, size 0x1, align 1
    bool m_bIsExit; // offset 0xA, size 0x1, align 1
    char _pad_000B[0x5]; // offset 0xB
};
