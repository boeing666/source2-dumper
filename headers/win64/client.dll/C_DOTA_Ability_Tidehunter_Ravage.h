#pragma once

class C_DOTA_Ability_Tidehunter_Ravage : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hEntsHit; // offset 0x6A8, size 0x18, align 8
    bool m_bAwardedKillEater; // offset 0x6C0, size 0x1, align 1
    char _pad_06C1[0x3]; // offset 0x6C1
    float32 duration; // offset 0x6C4, size 0x4, align 4
};
