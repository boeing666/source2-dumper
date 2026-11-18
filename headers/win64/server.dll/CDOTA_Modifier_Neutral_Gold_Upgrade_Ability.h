#pragma once

class CDOTA_Modifier_Neutral_Gold_Upgrade_Ability : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage_pct; // offset 0x1AF8, size 0x4, align 4
    float32 hp_pct; // offset 0x1AFC, size 0x4, align 4
    float32 xp_bounty_pct; // offset 0x1B00, size 0x4, align 4
    float32 gold_bounty_pct; // offset 0x1B04, size 0x4, align 4
    int32 base_xp; // offset 0x1B08, size 0x4, align 4
    int32 base_gold_bounty; // offset 0x1B0C, size 0x4, align 4
    float32 model_scale; // offset 0x1B10, size 0x4, align 4
    ParticleIndex_t m_nFxIndex; // offset 0x1B14, size 0x4, align 255
};
