#pragma once

class CDOTA_Ability_Brewmaster_CinderBrew : public CDOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hUnitsHit; // offset 0x860, size 0x18, align 8
    float32 duration; // offset 0x878, size 0x4, align 4
    float32 barrel_impact_damage; // offset 0x87C, size 0x4, align 4
    float32 barrel_width; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x14]; // offset 0x884
};
