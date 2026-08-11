#pragma once

class CDOTA_Ability_Shadow_Demon_Disruption : public CDOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CBaseEntity > m_hDisruptedUnit; // offset 0x85C, size 0x4, align 4
};
