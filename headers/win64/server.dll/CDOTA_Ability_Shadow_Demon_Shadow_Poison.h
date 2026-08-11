#pragma once

class CDOTA_Ability_Shadow_Demon_Shadow_Poison : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hPoisonedUnits; // offset 0x580, size 0x18, align 8
    bool m_bHitDisruptedUnit; // offset 0x598, size 0x1, align 1
    char _pad_0599[0x3]; // offset 0x599
    float32 radius; // offset 0x59C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitUnits; // offset 0x5A0, size 0x18, align 8
    char _pad_05B8[0x18]; // offset 0x5B8
};
