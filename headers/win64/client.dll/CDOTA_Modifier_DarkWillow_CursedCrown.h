#pragma once

class CDOTA_Modifier_DarkWillow_CursedCrown : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 delay; // offset 0x1AF8, size 0x4, align 4
    float32 stun_duration; // offset 0x1AFC, size 0x4, align 4
    float32 stun_radius; // offset 0x1B00, size 0x4, align 4
    int32 accumulated_damage_pct; // offset 0x1B04, size 0x4, align 4
    int32 accumulated_damage_pct_ally; // offset 0x1B08, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1B0C, size 0x4, align 255
    float32 flAccumulatedDamage; // offset 0x1B10, size 0x4, align 4
    bool bAccumulatedDamageDealt; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
};
