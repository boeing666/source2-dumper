#pragma once

class CCitadel_Ability_Bookworm_KnightCharge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1C28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0xF70, size 0x18, align 8
    char _pad_0F88[0xC9C]; // offset 0xF88
    bool m_bAffectedAnyTargets; // offset 0x1C24, size 0x1, align 1
    char _pad_1C25[0x3]; // offset 0x1C25
};
