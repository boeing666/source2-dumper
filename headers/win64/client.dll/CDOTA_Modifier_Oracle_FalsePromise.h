#pragma once

class CDOTA_Modifier_Oracle_FalsePromise : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bWaitingForInvulnerability; // offset 0x1AA8, size 0x1, align 1
    bool m_bDisableHealing; // offset 0x1AA9, size 0x1, align 1
    char _pad_1AAA[0x2]; // offset 0x1AAA
    float32 m_flHealthOnCreated; // offset 0x1AAC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB0, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1AB4, size 0x4, align 255
    float32 m_flRunningDmg; // offset 0x1AB8, size 0x4, align 4
    float32 m_flRunningHealth; // offset 0x1ABC, size 0x4, align 4
    float32 m_flExpectedFinalHeal; // offset 0x1AC0, size 0x4, align 4
    int32 bonus_armor; // offset 0x1AC4, size 0x4, align 4
    float32 heal_amp_pct; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
