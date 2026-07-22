#pragma once

class CNmRootMotionData  // sizeof 0x50, align 0x10 (animlib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CTransform > m_transforms; // offset 0x0, size 0x18, align 8
    int32 m_nNumFrames; // offset 0x18, size 0x4, align 4
    float32 m_flAverageLinearVelocity; // offset 0x1C, size 0x4, align 4
    float32 m_flAverageAngularVelocityRadians; // offset 0x20, size 0x4, align 4
    char _pad_0024[0xC]; // offset 0x24
    CTransform m_totalDelta; // offset 0x30, size 0x20, align 16
};
