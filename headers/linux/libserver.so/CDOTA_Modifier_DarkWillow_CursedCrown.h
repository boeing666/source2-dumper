#pragma once

class CDOTA_Modifier_DarkWillow_CursedCrown : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 delay; // offset 0x1A78, size 0x4, align 4
    float32 stun_duration; // offset 0x1A7C, size 0x4, align 4
    float32 stun_radius; // offset 0x1A80, size 0x4, align 4
    int32 accumulated_damage_pct; // offset 0x1A84, size 0x4, align 4
    int32 accumulated_damage_pct_ally; // offset 0x1A88, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1A8C, size 0x4, align 255
    float32 flAccumulatedDamage; // offset 0x1A90, size 0x4, align 4
    bool bAccumulatedDamageDealt; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
};
