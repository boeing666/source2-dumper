#pragma once

class CAudioAnimTag : public CAnimTagBase /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CUtlString m_clipName; // offset 0x58, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CUtlString m_attachmentName; // offset 0x60, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flVolume; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_bStopWhenTagEnds; // offset 0x6C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bStopWhenGraphEnds; // offset 0x6D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPlayOnServer; // offset 0x6E, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPlayOnClient; // offset 0x6F, size 0x1, align 1 | MPropertyFriendlyName
};
