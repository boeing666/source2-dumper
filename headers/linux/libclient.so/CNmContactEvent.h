#pragma once

class CNmContactEvent : public CNmEvent /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CGlobalSymbol m_configID; // offset 0x18, size 0x8, align 8
    CGlobalSymbol m_probeBoneID; // offset 0x20, size 0x8, align 8
    Vector m_vBoneLocalProbeDir; // offset 0x28, size 0xC, align 4
    float32 m_flProbeMaxDist; // offset 0x34, size 0x4, align 4
    NmContactAudioInfo_t m_audioInfo; // offset 0x38, size 0x18, align 8
};
