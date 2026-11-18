#pragma once

class C_DOTA_Ability_MonkeyKing_FurArmy : public C_DOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CHandle< C_BaseEntity > m_hThinker; // offset 0x828, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x82C, size 0x4, align 255
    int32 num_first_soldiers; // offset 0x830, size 0x4, align 4
    int32 num_second_soldiers; // offset 0x834, size 0x4, align 4
    bool m_bCreateMonkeys; // offset 0x838, size 0x1, align 1
    char _pad_0839[0x3]; // offset 0x839
    GameTime_t m_flNextCreationTime; // offset 0x83C, size 0x4, align 255
    GameTime_t m_flScepterTime; // offset 0x840, size 0x4, align 255
    char _pad_0844[0x4]; // offset 0x844
    CUtlVector< CHandle< C_BaseEntity > > m_vecSoldiers; // offset 0x848, size 0x18, align 8
};
