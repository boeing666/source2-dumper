#pragma once

class CBaseMoveBehavior : public CPathKeyFrame /*0x0*/  // sizeof 0x540, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x500]; // offset 0x0
    int32 m_iPositionInterpolator; // offset 0x500, size 0x4, align 4
    int32 m_iRotationInterpolator; // offset 0x504, size 0x4, align 4
    float32 m_flAnimStartTime; // offset 0x508, size 0x4, align 4
    float32 m_flAnimEndTime; // offset 0x50C, size 0x4, align 4
    float32 m_flAverageSpeedAcrossFrame; // offset 0x510, size 0x4, align 4
    char _pad_0514[0x4]; // offset 0x514
    CPathKeyFrame* m_pCurrentKeyFrame; // offset 0x518, size 0x8, align 8 | MClassPtr
    CPathKeyFrame* m_pTargetKeyFrame; // offset 0x520, size 0x8, align 8 | MClassPtr
    CPathKeyFrame* m_pPreKeyFrame; // offset 0x528, size 0x8, align 8 | MClassPtr
    CPathKeyFrame* m_pPostKeyFrame; // offset 0x530, size 0x8, align 8 | MClassPtr
    float32 m_flTimeIntoFrame; // offset 0x538, size 0x4, align 4
    int32 m_iDirection; // offset 0x53C, size 0x4, align 4
};
