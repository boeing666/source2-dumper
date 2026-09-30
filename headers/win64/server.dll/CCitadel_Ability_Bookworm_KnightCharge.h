#pragma once

class CCitadel_Ability_Bookworm_KnightCharge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2608, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0x14A0, size 0x18, align 8
    char _pad_14B8[0x114C]; // offset 0x14B8
    bool m_bAffectedAnyTargets; // offset 0x2604, size 0x1, align 1
    char _pad_2605[0x3]; // offset 0x2605
};
