#pragma once

class CCitadel_Ability_Tier2Boss_RocketBarrage : public CCitadelBaseAbilityServerOnly /*0x0*/  // sizeof 0x1B90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    int32 m_nGrenadeIndex; // offset 0x14A8, size 0x4, align 4
    int32 m_nTotalGrenades; // offset 0x14AC, size 0x4, align 4
    char _pad_14B0[0x6E0]; // offset 0x14B0
};
