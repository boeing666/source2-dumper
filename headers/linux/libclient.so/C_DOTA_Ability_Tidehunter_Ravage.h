#pragma once

class C_DOTA_Ability_Tidehunter_Ravage : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hEntsHit; // offset 0x828, size 0x18, align 8
    bool m_bAwardedKillEater; // offset 0x840, size 0x1, align 1
    char _pad_0841[0x3]; // offset 0x841
    float32 duration; // offset 0x844, size 0x4, align 4
};
