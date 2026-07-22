#pragma once

class C_DOTA_Ability_Largo_AmphibianRhapsody : public C_DOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x834]; // offset 0x0
    float32 duration; // offset 0x834, size 0x4, align 4
    float32 rhythm_grace_period; // offset 0x838, size 0x4, align 4
    float32 movement_burst_duration; // offset 0x83C, size 0x4, align 4
    float32 slow_resistance_burst_duration; // offset 0x840, size 0x4, align 4
    float32 radius; // offset 0x844, size 0x4, align 4
    float32 heal_burst; // offset 0x848, size 0x4, align 4
    int32 max_stacks; // offset 0x84C, size 0x4, align 4
    bool m_bFirstSongPlayed; // offset 0x850, size 0x1, align 1
    char _pad_0851[0x3]; // offset 0x851
    float32 m_flSongStartTime; // offset 0x854, size 0x4, align 4
    int32 m_nBurstEffect; // offset 0x858, size 0x4, align 4
    int32 m_nFailEffect; // offset 0x85C, size 0x4, align 4
    char _pad_0860[0x10]; // offset 0x860
    CUtlVector< char* > m_vecClientSideOriginalAbilities; // offset 0x870, size 0x18, align 8
    int32 m_nInvalidOrders; // offset 0x888, size 0x4, align 4
    int32 m_nSelectedUnitChanged; // offset 0x88C, size 0x4, align 4
};
