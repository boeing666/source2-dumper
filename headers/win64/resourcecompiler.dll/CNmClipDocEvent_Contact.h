#pragma once

class CNmClipDocEvent_Contact : public CNmClipDocEvent /*0x0*/  // sizeof 0x50, align 0x8 [vtable trivial_dtor] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CGlobalSymbol m_configID; // offset 0x18, size 0x8, align 8 | MPropertyAutoRebuildOnChange
    CGlobalSymbol m_probeBoneID; // offset 0x20, size 0x8, align 8 | MPropertyAttrStateCallback
    Vector m_vBoneLocalProbeDir; // offset 0x28, size 0xC, align 4 | MPropertyAttrStateCallback
    float32 m_flProbeMaxDist; // offset 0x34, size 0x4, align 4 | MPropertyAttrStateCallback
    NmContactAudioInfo_t m_audioInfo; // offset 0x38, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
};
