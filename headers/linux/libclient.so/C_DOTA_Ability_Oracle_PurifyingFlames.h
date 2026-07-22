#pragma once

class C_DOTA_Ability_Oracle_PurifyingFlames : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    bool m_bTargetIsAlly; // offset 0x824, size 0x1, align 1
    char _pad_0825[0x3]; // offset 0x825
    CHandle< C_BaseEntity > m_hRecentTarget; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
};
