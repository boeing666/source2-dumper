#pragma once

class CDOTA_Modifier_Alchemist_UnstableConcoction : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 brew_time; // offset 0x1AF8, size 0x4, align 4
    float32 brew_explosion; // offset 0x1AFC, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1B00, size 0x4, align 255
    GameTime_t m_fLastAlertTime; // offset 0x1B04, size 0x4, align 255
    ParticleIndex_t m_nConcoctionFXIndex; // offset 0x1B08, size 0x4, align 255
    bool m_bHasStunned; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    int32 damage_resistance; // offset 0x1B10, size 0x4, align 4
    int32 move_speed; // offset 0x1B14, size 0x4, align 4
};
