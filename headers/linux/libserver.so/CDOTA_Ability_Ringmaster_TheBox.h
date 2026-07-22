#pragma once

class CDOTA_Ability_Ringmaster_TheBox : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85B]; // offset 0x0
    bool m_bGrantedScepterCharges; // offset 0x85B, size 0x1, align 1
    char _pad_085C[0x4]; // offset 0x85C
    CUtlVector< CHandle< CBaseEntity > > m_vecBoxedUnits; // offset 0x860, size 0x18, align 8
};
