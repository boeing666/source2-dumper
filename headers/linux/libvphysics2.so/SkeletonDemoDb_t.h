#pragma once

struct SkeletonDemoDb_t  // sizeof 0x38, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlVector< SkeletonAnimCapture_t* > m_AnimCaptures; // offset 0x0, size 0x18, align 8
    CUtlVector< SkeletonAnimCapture_t::Camera_t > m_CameraTrack; // offset 0x18, size 0x18, align 8
    float32 m_flRecordingTime; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
};
