#pragma once

class CNmGraphDocClipNode::CData : public CNmGraphDocVariationDataNode::CData /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_clip; // offset 0x8, size 0x8, align 8 | MPropertyAttributeEditor
    float32 m_flSpeedMultiplier; // offset 0x10, size 0x4, align 4 | MPropertyAttributeRange
    int32 m_nStartSyncEventOffset; // offset 0x14, size 0x4, align 4
};
