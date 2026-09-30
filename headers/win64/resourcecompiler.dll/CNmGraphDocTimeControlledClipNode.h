#pragma once

class CNmGraphDocTimeControlledClipNode : public CNmGraphDocVariationDataNode /*0x0*/  // sizeof 0x228, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x208]; // offset 0x0
    bool m_bSampleRootMotion; // offset 0x208, size 0x1, align 1
    char _pad_0209[0x7]; // offset 0x209
    CUtlVector< CGlobalSymbol > m_graphEvents; // offset 0x210, size 0x18, align 8 | MPropertyGroupName MPropertyAttributeEditor MPropertyAutoExpandSelf
};
