#pragma once

class C_DOTA_Ability_MonkeyKing_Boundless_Strike : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 strike_cast_range; // offset 0x824, size 0x4, align 4
    float32 strike_radius; // offset 0x828, size 0x4, align 4
    int32 spring_channel_pct; // offset 0x82C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x830, size 0x4, align 255
    bool m_bIsAltCastState; // offset 0x834, size 0x1, align 1
    char _pad_0835[0x3]; // offset 0x835
    CUtlVector< C_DOTA_BaseNPC* > struckEntities; // offset 0x838, size 0x18, align 8
};
