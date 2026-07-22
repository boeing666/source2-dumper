#pragma once

class CDOTA_Ability_Largo_AmphibianRhapsody : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 duration; // offset 0x85C, size 0x4, align 4
    float32 rhythm_grace_period; // offset 0x860, size 0x4, align 4
    float32 movement_burst_duration; // offset 0x864, size 0x4, align 4
    float32 slow_resistance_burst_duration; // offset 0x868, size 0x4, align 4
    float32 radius; // offset 0x86C, size 0x4, align 4
    float32 heal_burst; // offset 0x870, size 0x4, align 4
    int32 max_stacks; // offset 0x874, size 0x4, align 4
    bool m_bFirstSongPlayed; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x3]; // offset 0x879
    float32 m_flSongStartTime; // offset 0x87C, size 0x4, align 4
    int32 m_nBurstEffect; // offset 0x880, size 0x4, align 4
    int32 m_nFailEffect; // offset 0x884, size 0x4, align 4
};
