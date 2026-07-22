#pragma once

class C_DOTA_Ability_Largo_AmphibianRhapsody_Song : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 double_song; // offset 0x6A8, size 0x4, align 4
    float32 song_cost_reduction_per_stack; // offset 0x6AC, size 0x4, align 4
    bool m_bInRhythmTiming; // offset 0x6B0, size 0x1, align 1
    char _pad_06B1[0x7]; // offset 0x6B1
};
