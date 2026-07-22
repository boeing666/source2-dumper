#pragma once

class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 challenge_duration; // offset 0x1A58, size 0x4, align 4
    float32 reveal_duration; // offset 0x1A5C, size 0x4, align 4
    float32 reveal_delay; // offset 0x1A60, size 0x4, align 4
    float32 completed_cooldown; // offset 0x1A64, size 0x4, align 4
    float32 think_interval; // offset 0x1A68, size 0x4, align 4
    float32 acknowledge_range; // offset 0x1A6C, size 0x4, align 4
    char _pad_1A70[0x4]; // offset 0x1A70
    GameTime_t m_flRevealTime; // offset 0x1A74, size 0x4, align 255
    ParticleIndex_t m_nOverheadFXIndex; // offset 0x1A78, size 0x4, align 255
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
