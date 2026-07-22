#pragma once

class CDOTA_Ability_Tidehunter_Ravage : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hEntsHit; // offset 0x860, size 0x18, align 8
    bool m_bAwardedKillEater; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x3]; // offset 0x879
    float32 duration; // offset 0x87C, size 0x4, align 4
};
