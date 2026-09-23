#pragma once

struct CNmSkeletonDocument::ContactConfig_t  // sizeof 0x38, align 0x8 [trivial_dtor] (animdoclib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8
    CGlobalSymbol m_boneID; // offset 0x8, size 0x8, align 8
    Vector m_vBoneLocalProbeDir; // offset 0x10, size 0xC, align 4
    float32 m_flProbeMaxDist; // offset 0x1C, size 0x4, align 4
    NmContactAudioInfo_t m_audioInfo; // offset 0x20, size 0x18, align 8 | MPropertyFriendlyName
};
