#pragma once

class CCitadel_Ability_Tier2Boss_RocketBarrage : public CCitadelBaseAbilityServerOnly /*0x0*/  // sizeof 0x1DC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    int32 m_nGrenadeIndex; // offset 0x16E0, size 0x4, align 4
    int32 m_nTotalGrenades; // offset 0x16E4, size 0x4, align 4
    char _pad_16E8[0x6E0]; // offset 0x16E8
};
