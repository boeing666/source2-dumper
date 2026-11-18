#pragma once

class CDOTA_Modifier_XP_Fountain_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bActive; // offset 0x1AF8, size 0x1, align 1
    bool m_bIsGranting; // offset 0x1AF9, size 0x1, align 1
    bool m_bInitialized; // offset 0x1AFA, size 0x1, align 1
    bool m_bSetFoW; // offset 0x1AFB, size 0x1, align 1
    GameTime_t m_flNextXpActivationTime; // offset 0x1AFC, size 0x4, align 255
    float32 countdown_time; // offset 0x1B00, size 0x4, align 4
    float32 think_interval; // offset 0x1B04, size 0x4, align 4
    float32 m_flRemainingCountDownTime; // offset 0x1B08, size 0x4, align 4
    float32 radius; // offset 0x1B0C, size 0x4, align 4
    float32 m_flPauseDuration; // offset 0x1B10, size 0x4, align 4
    bool m_bCapturableByEnemy; // offset 0x1B14, size 0x1, align 1
    bool m_bDefendersFieldDisabled; // offset 0x1B15, size 0x1, align 1
    char _pad_1B16[0x2]; // offset 0x1B16
    ParticleIndex_t m_nFxProgress; // offset 0x1B18, size 0x4, align 255
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
