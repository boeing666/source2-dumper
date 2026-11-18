#pragma once

class CDOTA_Modifier_Oracle_FalsePromise : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B28]; // offset 0x0
    bool m_bWaitingForInvulnerability; // offset 0x1B28, size 0x1, align 1
    bool m_bDisableHealing; // offset 0x1B29, size 0x1, align 1
    char _pad_1B2A[0x2]; // offset 0x1B2A
    float32 m_flHealthOnCreated; // offset 0x1B2C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B30, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1B34, size 0x4, align 255
    float32 m_flRunningDmg; // offset 0x1B38, size 0x4, align 4
    float32 m_flRunningHealth; // offset 0x1B3C, size 0x4, align 4
    float32 m_flExpectedFinalHeal; // offset 0x1B40, size 0x4, align 4
    int32 bonus_armor; // offset 0x1B44, size 0x4, align 4
    float32 heal_amp_pct; // offset 0x1B48, size 0x4, align 4
    char _pad_1B4C[0x4]; // offset 0x1B4C
};
