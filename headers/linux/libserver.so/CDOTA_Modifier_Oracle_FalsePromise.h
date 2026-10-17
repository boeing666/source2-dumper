#pragma once

class CDOTA_Modifier_Oracle_FalsePromise : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AD8]; // offset 0x0
    bool m_bWaitingForInvulnerability; // offset 0x1AD8, size 0x1, align 1
    bool m_bDisableHealing; // offset 0x1AD9, size 0x1, align 1
    char _pad_1ADA[0x2]; // offset 0x1ADA
    float32 m_flHealthOnCreated; // offset 0x1ADC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AE0, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1AE4, size 0x4, align 255
    float32 m_flRunningDmg; // offset 0x1AE8, size 0x4, align 4
    float32 m_flRunningHealth; // offset 0x1AEC, size 0x4, align 4
    float32 m_flExpectedFinalHeal; // offset 0x1AF0, size 0x4, align 4
    int32 bonus_armor; // offset 0x1AF4, size 0x4, align 4
    float32 heal_amp_pct; // offset 0x1AF8, size 0x4, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
};
