#pragma once

class CDOTA_Modifier_PrimalBeast_Pulverize_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_DOTA_BaseNPC > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    VectorWS m_vPulverizeCenter; // offset 0x1AFC, size 0xC, align 4
    VectorWS m_vCasterStartPos; // offset 0x1B08, size 0xC, align 4
    float32 splash_radius; // offset 0x1B14, size 0x4, align 4
    float32 interval; // offset 0x1B18, size 0x4, align 4
    float32 ministun; // offset 0x1B1C, size 0x4, align 4
    int32 damage; // offset 0x1B20, size 0x4, align 4
    int32 bonus_damage_per_hit; // offset 0x1B24, size 0x4, align 4
    int32 m_nHitCount; // offset 0x1B28, size 0x4, align 4
    float32 bonus_aoe_duration; // offset 0x1B2C, size 0x4, align 4
    int32 max_stacks; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
};
