#pragma once

class CDOTA_Modifier_PrimalBeast_Pulverize_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CDOTA_BaseNPC > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    VectorWS m_vPulverizeCenter; // offset 0x1AAC, size 0xC, align 4
    VectorWS m_vCasterStartPos; // offset 0x1AB8, size 0xC, align 4
    float32 splash_radius; // offset 0x1AC4, size 0x4, align 4
    float32 interval; // offset 0x1AC8, size 0x4, align 4
    float32 ministun; // offset 0x1ACC, size 0x4, align 4
    int32 damage; // offset 0x1AD0, size 0x4, align 4
    int32 bonus_damage_per_hit; // offset 0x1AD4, size 0x4, align 4
    int32 m_nHitCount; // offset 0x1AD8, size 0x4, align 4
    float32 bonus_aoe_duration; // offset 0x1ADC, size 0x4, align 4
    int32 max_stacks; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
