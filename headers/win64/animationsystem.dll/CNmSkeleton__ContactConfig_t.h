#pragma once

struct CNmSkeleton::ContactConfig_t  // sizeof 0x38, align 0x8 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8
    int32 m_nBoneIdx; // offset 0x8, size 0x4, align 4
    Vector m_vBoneLocalProbeDir; // offset 0xC, size 0xC, align 4
    float32 m_flProbeMaxDist; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    NmContactAudioInfo_t m_audioInfo; // offset 0x20, size 0x18, align 8
};
