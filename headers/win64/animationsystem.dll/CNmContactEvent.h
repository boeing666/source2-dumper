#pragma once

class CNmContactEvent : public CNmEvent /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CGlobalSymbol m_attachmentOrBoneID; // offset 0x18, size 0x8, align 8
    NmContactAudioInfo_t m_audioInfo; // offset 0x20, size 0x18, align 8
};
