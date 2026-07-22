#pragma once

class CDOTA_Ability_MonkeyKing_FurArmy : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hThinker; // offset 0x580, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x584, size 0x4, align 255
    int32 num_first_soldiers; // offset 0x588, size 0x4, align 4
    int32 num_second_soldiers; // offset 0x58C, size 0x4, align 4
    bool m_bCreateMonkeys; // offset 0x590, size 0x1, align 1
    char _pad_0591[0x3]; // offset 0x591
    GameTime_t m_flNextCreationTime; // offset 0x594, size 0x4, align 255
    GameTime_t m_flScepterTime; // offset 0x598, size 0x4, align 255
    char _pad_059C[0x4]; // offset 0x59C
    CUtlVector< CHandle< CBaseEntity > > m_vecSoldiers; // offset 0x5A0, size 0x18, align 8
};
