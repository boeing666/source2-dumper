#pragma once

class CTimerEntity : public CLogicalEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CEntityIOOutput m_OnTimer; // offset 0x788, size 0x18, align 255
    CEntityIOOutput m_OnTimerHigh; // offset 0x7A0, size 0x18, align 255
    CEntityIOOutput m_OnTimerLow; // offset 0x7B8, size 0x18, align 255
    int32 m_iDisabled; // offset 0x7D0, size 0x4, align 4
    float32 m_flInitialDelay; // offset 0x7D4, size 0x4, align 4
    float32 m_flRefireTime; // offset 0x7D8, size 0x4, align 4
    bool m_bUpDownState; // offset 0x7DC, size 0x1, align 1
    char _pad_07DD[0x3]; // offset 0x7DD
    int32 m_iUseRandomTime; // offset 0x7E0, size 0x4, align 4
    bool m_bPauseAfterFiring; // offset 0x7E4, size 0x1, align 1
    char _pad_07E5[0x3]; // offset 0x7E5
    float32 m_flLowerRandomBound; // offset 0x7E8, size 0x4, align 4
    float32 m_flUpperRandomBound; // offset 0x7EC, size 0x4, align 4
    float32 m_flRemainingTime; // offset 0x7F0, size 0x4, align 4
    bool m_bPaused; // offset 0x7F4, size 0x1, align 1
    char _pad_07F5[0x3]; // offset 0x7F5
};
