#pragma once

class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 challenge_duration; // offset 0x1A78, size 0x4, align 4
    float32 reveal_duration; // offset 0x1A7C, size 0x4, align 4
    float32 reveal_delay; // offset 0x1A80, size 0x4, align 4
    float32 completed_cooldown; // offset 0x1A84, size 0x4, align 4
    float32 think_interval; // offset 0x1A88, size 0x4, align 4
    float32 acknowledge_range; // offset 0x1A8C, size 0x4, align 4
    char _pad_1A90[0x4]; // offset 0x1A90
    GameTime_t m_flRevealTime; // offset 0x1A94, size 0x4, align 255
    ParticleIndex_t m_nOverheadFXIndex; // offset 0x1A98, size 0x4, align 255
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
