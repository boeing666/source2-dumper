#pragma once

class CTimerEntity : public CLogicalEntity /*0x0*/  // sizeof 0x518, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_OnTimer; // offset 0x4A8, size 0x18, align 255
    CEntityIOOutput m_OnTimerHigh; // offset 0x4C0, size 0x18, align 255
    CEntityIOOutput m_OnTimerLow; // offset 0x4D8, size 0x18, align 255
    int32 m_iDisabled; // offset 0x4F0, size 0x4, align 4
    float32 m_flInitialDelay; // offset 0x4F4, size 0x4, align 4
    float32 m_flRefireTime; // offset 0x4F8, size 0x4, align 4
    bool m_bUpDownState; // offset 0x4FC, size 0x1, align 1
    char _pad_04FD[0x3]; // offset 0x4FD
    int32 m_iUseRandomTime; // offset 0x500, size 0x4, align 4
    bool m_bPauseAfterFiring; // offset 0x504, size 0x1, align 1
    char _pad_0505[0x3]; // offset 0x505
    float32 m_flLowerRandomBound; // offset 0x508, size 0x4, align 4
    float32 m_flUpperRandomBound; // offset 0x50C, size 0x4, align 4
    float32 m_flRemainingTime; // offset 0x510, size 0x4, align 4
    bool m_bPaused; // offset 0x514, size 0x1, align 1
    char _pad_0515[0x3]; // offset 0x515
};
