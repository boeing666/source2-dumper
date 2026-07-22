#pragma once

class CBaseMoveBehavior : public CPathKeyFrame /*0x0*/  // sizeof 0x510, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x4E0]; // offset 0x0
    int32 m_iPositionInterpolator; // offset 0x4E0, size 0x4, align 4
    int32 m_iRotationInterpolator; // offset 0x4E4, size 0x4, align 4
    float32 m_flAnimStartTime; // offset 0x4E8, size 0x4, align 4
    float32 m_flAnimEndTime; // offset 0x4EC, size 0x4, align 4
    float32 m_flAverageSpeedAcrossFrame; // offset 0x4F0, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pCurrentKeyFrame; // offset 0x4F4, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pTargetKeyFrame; // offset 0x4F8, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pPreKeyFrame; // offset 0x4FC, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pPostKeyFrame; // offset 0x500, size 0x4, align 4
    float32 m_flTimeIntoFrame; // offset 0x504, size 0x4, align 4
    int32 m_iDirection; // offset 0x508, size 0x4, align 4
    char _pad_050C[0x4]; // offset 0x50C
};
