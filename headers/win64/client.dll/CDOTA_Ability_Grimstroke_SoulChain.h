#pragma once

class CDOTA_Ability_Grimstroke_SoulChain : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 chain_duration; // offset 0x6A8, size 0x4, align 4
    float32 chain_latch_radius; // offset 0x6AC, size 0x4, align 4
    float32 creep_duration_pct; // offset 0x6B0, size 0x4, align 4
    char _pad_06B4[0x4]; // offset 0x6B4
};
