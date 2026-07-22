#pragma once

class CTimerEntity : public CLogicalEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_OnTimer; // offset 0x778, size 0x18, align 255
    CEntityIOOutput m_OnTimerHigh; // offset 0x790, size 0x18, align 255
    CEntityIOOutput m_OnTimerLow; // offset 0x7A8, size 0x18, align 255
    int32 m_iDisabled; // offset 0x7C0, size 0x4, align 4
    float32 m_flInitialDelay; // offset 0x7C4, size 0x4, align 4
    float32 m_flRefireTime; // offset 0x7C8, size 0x4, align 4
    bool m_bUpDownState; // offset 0x7CC, size 0x1, align 1
    char _pad_07CD[0x3]; // offset 0x7CD
    int32 m_iUseRandomTime; // offset 0x7D0, size 0x4, align 4
    bool m_bPauseAfterFiring; // offset 0x7D4, size 0x1, align 1
    char _pad_07D5[0x3]; // offset 0x7D5
    float32 m_flLowerRandomBound; // offset 0x7D8, size 0x4, align 4
    float32 m_flUpperRandomBound; // offset 0x7DC, size 0x4, align 4
    float32 m_flRemainingTime; // offset 0x7E0, size 0x4, align 4
    bool m_bPaused; // offset 0x7E4, size 0x1, align 1
    char _pad_07E5[0x3]; // offset 0x7E5
};
