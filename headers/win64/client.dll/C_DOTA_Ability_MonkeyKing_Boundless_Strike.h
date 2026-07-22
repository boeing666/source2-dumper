#pragma once

class C_DOTA_Ability_MonkeyKing_Boundless_Strike : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 strike_cast_range; // offset 0x6A8, size 0x4, align 4
    float32 strike_radius; // offset 0x6AC, size 0x4, align 4
    int32 spring_channel_pct; // offset 0x6B0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6B4, size 0x4, align 255
    bool m_bIsAltCastState; // offset 0x6B8, size 0x1, align 1
    char _pad_06B9[0x7]; // offset 0x6B9
    CUtlVector< C_DOTA_BaseNPC* > struckEntities; // offset 0x6C0, size 0x18, align 8
};
