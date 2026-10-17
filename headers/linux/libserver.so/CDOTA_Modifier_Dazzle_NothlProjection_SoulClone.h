#pragma once

class CDOTA_Modifier_Dazzle_NothlProjection_SoulClone : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 shadow_wave_cdr; // offset 0x1AA8, size 0x4, align 4
    float32 healing_amp; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1AB0, size 0x4, align 255
    float32 leash_start; // offset 0x1AB4, size 0x4, align 4
    float32 base_leash_pull; // offset 0x1AB8, size 0x4, align 4
    float32 leash_increase; // offset 0x1ABC, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hBody; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
