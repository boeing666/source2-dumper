#pragma once

class CCitadel_Ability_Tier2Boss_RocketBarrage : public CCitadelBaseAbilityServerOnly /*0x0*/  // sizeof 0x16E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    int32 m_nGrenadeIndex; // offset 0x11D8, size 0x4, align 4
    int32 m_nTotalGrenades; // offset 0x11DC, size 0x4, align 4
    char _pad_11E0[0x500]; // offset 0x11E0
};
