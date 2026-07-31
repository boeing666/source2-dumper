#pragma once

class CDOTA_Modifier_XP_Fountain_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bActive; // offset 0x1A78, size 0x1, align 1
    bool m_bIsGranting; // offset 0x1A79, size 0x1, align 1
    bool m_bInitialized; // offset 0x1A7A, size 0x1, align 1
    bool m_bSetFoW; // offset 0x1A7B, size 0x1, align 1
    GameTime_t m_flNextXpActivationTime; // offset 0x1A7C, size 0x4, align 255
    float32 countdown_time; // offset 0x1A80, size 0x4, align 4
    float32 think_interval; // offset 0x1A84, size 0x4, align 4
    float32 m_flRemainingCountDownTime; // offset 0x1A88, size 0x4, align 4
    float32 radius; // offset 0x1A8C, size 0x4, align 4
    float32 m_flPauseDuration; // offset 0x1A90, size 0x4, align 4
    bool m_bCapturableByEnemy; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
};
