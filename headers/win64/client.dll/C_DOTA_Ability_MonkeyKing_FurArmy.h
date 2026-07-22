#pragma once

class C_DOTA_Ability_MonkeyKing_FurArmy : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hThinker; // offset 0x6A8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6AC, size 0x4, align 255
    int32 num_first_soldiers; // offset 0x6B0, size 0x4, align 4
    int32 num_second_soldiers; // offset 0x6B4, size 0x4, align 4
    bool m_bCreateMonkeys; // offset 0x6B8, size 0x1, align 1
    char _pad_06B9[0x3]; // offset 0x6B9
    GameTime_t m_flNextCreationTime; // offset 0x6BC, size 0x4, align 255
    GameTime_t m_flScepterTime; // offset 0x6C0, size 0x4, align 255
    char _pad_06C4[0x4]; // offset 0x6C4
    CUtlVector< CHandle< C_BaseEntity > > m_vecSoldiers; // offset 0x6C8, size 0x18, align 8
};
