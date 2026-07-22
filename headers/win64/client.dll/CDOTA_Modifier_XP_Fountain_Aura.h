#pragma once

class CDOTA_Modifier_XP_Fountain_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bActive; // offset 0x1A58, size 0x1, align 1
    bool m_bIsGranting; // offset 0x1A59, size 0x1, align 1
    bool m_bInitialized; // offset 0x1A5A, size 0x1, align 1
    bool m_bSetFoW; // offset 0x1A5B, size 0x1, align 1
    GameTime_t m_flNextXpActivationTime; // offset 0x1A5C, size 0x4, align 255
    float32 countdown_time; // offset 0x1A60, size 0x4, align 4
    float32 think_interval; // offset 0x1A64, size 0x4, align 4
    float32 m_flRemainingCountDownTime; // offset 0x1A68, size 0x4, align 4
    float32 radius; // offset 0x1A6C, size 0x4, align 4
    float32 m_flPauseDuration; // offset 0x1A70, size 0x4, align 4
    bool m_bCapturableByEnemy; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
};
