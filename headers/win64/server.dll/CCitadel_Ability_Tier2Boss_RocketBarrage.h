#pragma once

class CCitadel_Ability_Tier2Boss_RocketBarrage : public CCitadelBaseAbilityServerOnly /*0x0*/  // sizeof 0x1478, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    int32 m_nGrenadeIndex; // offset 0xF70, size 0x4, align 4
    int32 m_nTotalGrenades; // offset 0xF74, size 0x4, align 4
    char _pad_0F78[0x500]; // offset 0xF78
};
