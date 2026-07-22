#pragma once

class CDOTA_Ability_MonkeyKing_Boundless_Strike : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 strike_cast_range; // offset 0x85C, size 0x4, align 4
    float32 strike_radius; // offset 0x860, size 0x4, align 4
    int32 spring_channel_pct; // offset 0x864, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x868, size 0x4, align 255
    bool m_bIsAltCastState; // offset 0x86C, size 0x1, align 1
    char _pad_086D[0x3]; // offset 0x86D
    CUtlVector< CDOTA_BaseNPC* > struckEntities; // offset 0x870, size 0x18, align 8
};
