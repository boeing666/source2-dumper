#pragma once

class FootFixedSettings  // sizeof 0x40, align 0x10 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    TraceSettings_t m_traceSettings; // offset 0x0, size 0x8, align 4
    char _pad_0008[0x8]; // offset 0x8
    VectorAligned m_vFootBaseBindPosePositionMS; // offset 0x10, size 0x10, align 16
    float32 m_flFootBaseLength; // offset 0x20, size 0x4, align 4
    float32 m_flMaxRotationLeft; // offset 0x24, size 0x4, align 4
    float32 m_flMaxRotationRight; // offset 0x28, size 0x4, align 4
    int32 m_footstepLandedTagIndex; // offset 0x2C, size 0x4, align 4
    bool m_bEnableTracing; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x3]; // offset 0x31
    float32 m_flTraceAngleBlend; // offset 0x34, size 0x4, align 4
    int32 m_nDisableTagIndex; // offset 0x38, size 0x4, align 4
    int32 m_nFootIndex; // offset 0x3C, size 0x4, align 4
};
