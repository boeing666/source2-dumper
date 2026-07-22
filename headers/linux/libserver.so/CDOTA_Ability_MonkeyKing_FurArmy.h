#pragma once

class CDOTA_Ability_MonkeyKing_FurArmy : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CBaseEntity > m_hThinker; // offset 0x85C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x860, size 0x4, align 255
    int32 num_first_soldiers; // offset 0x864, size 0x4, align 4
    int32 num_second_soldiers; // offset 0x868, size 0x4, align 4
    bool m_bCreateMonkeys; // offset 0x86C, size 0x1, align 1
    char _pad_086D[0x3]; // offset 0x86D
    GameTime_t m_flNextCreationTime; // offset 0x870, size 0x4, align 255
    GameTime_t m_flScepterTime; // offset 0x874, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_vecSoldiers; // offset 0x878, size 0x18, align 8
};
