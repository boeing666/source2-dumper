#pragma once

class C_DOTA_Ability_Oracle_PurifyingFlames : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    bool m_bTargetIsAlly; // offset 0x6A8, size 0x1, align 1
    char _pad_06A9[0x3]; // offset 0x6A9
    CHandle< C_BaseEntity > m_hRecentTarget; // offset 0x6AC, size 0x4, align 4
};
