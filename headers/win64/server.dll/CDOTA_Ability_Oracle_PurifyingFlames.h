#pragma once

class CDOTA_Ability_Oracle_PurifyingFlames : public CDOTABaseAbility /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    bool m_bTargetIsAlly; // offset 0x580, size 0x1, align 1
    char _pad_0581[0x3]; // offset 0x581
    CHandle< CBaseEntity > m_hRecentTarget; // offset 0x584, size 0x4, align 4
};
