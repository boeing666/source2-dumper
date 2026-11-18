#pragma once

class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 challenge_duration; // offset 0x1AF8, size 0x4, align 4
    float32 reveal_duration; // offset 0x1AFC, size 0x4, align 4
    float32 reveal_delay; // offset 0x1B00, size 0x4, align 4
    float32 completed_cooldown; // offset 0x1B04, size 0x4, align 4
    float32 think_interval; // offset 0x1B08, size 0x4, align 4
    float32 acknowledge_range; // offset 0x1B0C, size 0x4, align 4
    char _pad_1B10[0x4]; // offset 0x1B10
    GameTime_t m_flRevealTime; // offset 0x1B14, size 0x4, align 255
    bool m_bFirstThink; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x3]; // offset 0x1B19
    PlayerID_t m_nRevealOpponentPlayerID; // offset 0x1B1C, size 0x4, align 255
    char _pad_1B20[0x8]; // offset 0x1B20
};
