#pragma once

class CDOTA_Ability_MonkeyKing_Boundless_Strike : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 strike_cast_range; // offset 0x580, size 0x4, align 4
    float32 strike_radius; // offset 0x584, size 0x4, align 4
    int32 spring_channel_pct; // offset 0x588, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x58C, size 0x4, align 255
    bool m_bIsAltCastState; // offset 0x590, size 0x1, align 1
    char _pad_0591[0x7]; // offset 0x591
    CUtlVector< CDOTA_BaseNPC* > struckEntities; // offset 0x598, size 0x18, align 8
};
