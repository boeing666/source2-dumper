#pragma once

class CDOTA_Ability_Oracle_PurifyingFlames : public CDOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85B]; // offset 0x0
    bool m_bTargetIsAlly; // offset 0x85B, size 0x1, align 1
    CHandle< CBaseEntity > m_hRecentTarget; // offset 0x85C, size 0x4, align 4
};
