#pragma once

struct SkeletonAnimCapture_t::FrameStamp_t  // sizeof 0x1C, align 0x4 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
    float32 m_flTime; // offset 0x0, size 0x4, align 4
    float32 m_flEntitySimTime; // offset 0x4, size 0x4, align 4
    bool m_bTeleportTick; // offset 0x8, size 0x1, align 1
    bool m_bPredicted; // offset 0x9, size 0x1, align 1
    char _pad_000A[0x2]; // offset 0xA
    float32 m_flCurTime; // offset 0xC, size 0x4, align 4
    float32 m_flRealTime; // offset 0x10, size 0x4, align 4
    int32 m_nFrameCount; // offset 0x14, size 0x4, align 4
    int32 m_nTickCount; // offset 0x18, size 0x4, align 4
};
