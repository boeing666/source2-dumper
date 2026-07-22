#pragma once

class CDOTA_Ability_Clinkz_DeathPact : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_nDevourFirstSlot; // offset 0x580, size 0x4, align 4
    bool m_bGoToTargetPosition; // offset 0x584, size 0x1, align 1
    char _pad_0585[0x3]; // offset 0x585
    CUtlVector< CHandle< CBaseEntity > > m_hSkeletonSummons; // offset 0x588, size 0x18, align 8
};
