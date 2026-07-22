#pragma once

class CNmGraphDocClipNode : public CNmGraphDocVariationDataNode /*0x0*/  // sizeof 0x220, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x200]; // offset 0x0
    bool m_bSampleRootMotion; // offset 0x200, size 0x1, align 1
    bool m_bAllowLooping; // offset 0x201, size 0x1, align 1
    char _pad_0202[0x6]; // offset 0x202
    CUtlVector< CGlobalSymbol > m_graphEvents; // offset 0x208, size 0x18, align 8 | MPropertyGroupName MPropertyAttributeEditor MPropertyAutoExpandSelf
};
