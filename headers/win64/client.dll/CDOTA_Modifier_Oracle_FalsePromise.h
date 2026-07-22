#pragma once

class CDOTA_Modifier_Oracle_FalsePromise : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A88]; // offset 0x0
    bool m_bWaitingForInvulnerability; // offset 0x1A88, size 0x1, align 1
    bool m_bDisableHealing; // offset 0x1A89, size 0x1, align 1
    char _pad_1A8A[0x2]; // offset 0x1A8A
    float32 m_flHealthOnCreated; // offset 0x1A8C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A90, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1A94, size 0x4, align 255
    float32 m_flRunningDmg; // offset 0x1A98, size 0x4, align 4
    float32 m_flRunningHealth; // offset 0x1A9C, size 0x4, align 4
    float32 m_flExpectedFinalHeal; // offset 0x1AA0, size 0x4, align 4
    int32 bonus_armor; // offset 0x1AA4, size 0x4, align 4
    float32 heal_amp_pct; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
