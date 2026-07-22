#pragma once

class CBaseMoveBehavior : public CPathKeyFrame /*0x0*/  // sizeof 0x7F0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x7B8]; // offset 0x0
    int32 m_iPositionInterpolator; // offset 0x7B8, size 0x4, align 4
    int32 m_iRotationInterpolator; // offset 0x7BC, size 0x4, align 4
    float32 m_flAnimStartTime; // offset 0x7C0, size 0x4, align 4
    float32 m_flAnimEndTime; // offset 0x7C4, size 0x4, align 4
    float32 m_flAverageSpeedAcrossFrame; // offset 0x7C8, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pCurrentKeyFrame; // offset 0x7CC, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pTargetKeyFrame; // offset 0x7D0, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pPreKeyFrame; // offset 0x7D4, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pPostKeyFrame; // offset 0x7D8, size 0x4, align 4
    float32 m_flTimeIntoFrame; // offset 0x7DC, size 0x4, align 4
    int32 m_iDirection; // offset 0x7E0, size 0x4, align 4
    char _pad_07E4[0xC]; // offset 0x7E4
};
