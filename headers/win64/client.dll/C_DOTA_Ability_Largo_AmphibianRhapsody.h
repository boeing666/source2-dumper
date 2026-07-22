#pragma once

class C_DOTA_Ability_Largo_AmphibianRhapsody : public C_DOTABaseAbility /*0x0*/  // sizeof 0x718, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B8]; // offset 0x0
    float32 duration; // offset 0x6B8, size 0x4, align 4
    float32 rhythm_grace_period; // offset 0x6BC, size 0x4, align 4
    float32 movement_burst_duration; // offset 0x6C0, size 0x4, align 4
    float32 slow_resistance_burst_duration; // offset 0x6C4, size 0x4, align 4
    float32 radius; // offset 0x6C8, size 0x4, align 4
    float32 heal_burst; // offset 0x6CC, size 0x4, align 4
    int32 max_stacks; // offset 0x6D0, size 0x4, align 4
    bool m_bFirstSongPlayed; // offset 0x6D4, size 0x1, align 1
    char _pad_06D5[0x3]; // offset 0x6D5
    float32 m_flSongStartTime; // offset 0x6D8, size 0x4, align 4
    int32 m_nBurstEffect; // offset 0x6DC, size 0x4, align 4
    int32 m_nFailEffect; // offset 0x6E0, size 0x4, align 4
    char _pad_06E4[0x14]; // offset 0x6E4
    CUtlVector< char* > m_vecClientSideOriginalAbilities; // offset 0x6F8, size 0x18, align 8
    int32 m_nInvalidOrders; // offset 0x710, size 0x4, align 4
    int32 m_nSelectedUnitChanged; // offset 0x714, size 0x4, align 4
};
