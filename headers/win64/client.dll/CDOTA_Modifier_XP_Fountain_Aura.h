#pragma once

class CDOTA_Modifier_XP_Fountain_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bActive; // offset 0x1AA8, size 0x1, align 1
    bool m_bIsGranting; // offset 0x1AA9, size 0x1, align 1
    bool m_bInitialized; // offset 0x1AAA, size 0x1, align 1
    bool m_bSetFoW; // offset 0x1AAB, size 0x1, align 1
    GameTime_t m_flNextXpActivationTime; // offset 0x1AAC, size 0x4, align 255
    float32 countdown_time; // offset 0x1AB0, size 0x4, align 4
    float32 think_interval; // offset 0x1AB4, size 0x4, align 4
    float32 m_flRemainingCountDownTime; // offset 0x1AB8, size 0x4, align 4
    float32 radius; // offset 0x1ABC, size 0x4, align 4
    float32 m_flPauseDuration; // offset 0x1AC0, size 0x4, align 4
    bool m_bCapturableByEnemy; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
};
