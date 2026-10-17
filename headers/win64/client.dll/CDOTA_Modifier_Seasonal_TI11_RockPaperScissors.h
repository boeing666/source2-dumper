#pragma once

class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 challenge_duration; // offset 0x1AA8, size 0x4, align 4
    float32 reveal_duration; // offset 0x1AAC, size 0x4, align 4
    float32 reveal_delay; // offset 0x1AB0, size 0x4, align 4
    float32 completed_cooldown; // offset 0x1AB4, size 0x4, align 4
    float32 think_interval; // offset 0x1AB8, size 0x4, align 4
    float32 acknowledge_range; // offset 0x1ABC, size 0x4, align 4
    char _pad_1AC0[0x4]; // offset 0x1AC0
    GameTime_t m_flRevealTime; // offset 0x1AC4, size 0x4, align 255
    ParticleIndex_t m_nOverheadFXIndex; // offset 0x1AC8, size 0x4, align 255
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
