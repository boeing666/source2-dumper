#pragma once

struct SkeletonAnimCapture_t::Frame_t  // sizeof 0xC0, align 0x10 (modellib) {MGetKV3ClassDefaults}
{
    float32 m_flTime; // offset 0x0, size 0x4, align 4
    SkeletonAnimCapture_t::FrameStamp_t m_Stamp; // offset 0x4, size 0x1C, align 4
    CTransform m_Transform; // offset 0x20, size 0x20, align 16
    bool m_bTeleport; // offset 0x40, size 0x1, align 1
    char _pad_0041[0x7]; // offset 0x41
    CUtlVector< CTransform > m_CompositeBones; // offset 0x48, size 0x18, align 8
    CUtlVector< CTransform > m_SimStateBones; // offset 0x60, size 0x18, align 8
    CUtlVector< CTransform > m_FeModelAnims; // offset 0x78, size 0x18, align 8
    CUtlVector< VectorAligned > m_FeModelPos; // offset 0x90, size 0x18, align 8
    CUtlVector< float32 > m_FlexControllerWeights; // offset 0xA8, size 0x18, align 8
};
