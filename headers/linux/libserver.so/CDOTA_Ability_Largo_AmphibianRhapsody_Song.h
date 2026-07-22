#pragma once

class CDOTA_Ability_Largo_AmphibianRhapsody_Song : public CDOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 double_song; // offset 0x85C, size 0x4, align 4
    float32 song_cost_reduction_per_stack; // offset 0x860, size 0x4, align 4
    bool m_bInRhythmTiming; // offset 0x864, size 0x1, align 1
    char _pad_0865[0x3]; // offset 0x865
};
