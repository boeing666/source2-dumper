#pragma once

class CDOTA_Modifier_Dazzle_NothlProjection_SoulClone : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 shadow_wave_cdr; // offset 0x1AF8, size 0x4, align 4
    float32 healing_amp; // offset 0x1AFC, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1B00, size 0x4, align 255
    float32 leash_start; // offset 0x1B04, size 0x4, align 4
    float32 base_leash_pull; // offset 0x1B08, size 0x4, align 4
    float32 leash_increase; // offset 0x1B0C, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hBody; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
