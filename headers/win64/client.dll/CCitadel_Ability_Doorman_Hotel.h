#pragma once

class CCitadel_Ability_Doorman_Hotel : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D18, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bSpendCooldown; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x3]; // offset 0x16D9
    VectorWS m_vLookTarget; // offset 0x16DC, size 0xC, align 4
    char _pad_16E8[0x630]; // offset 0x16E8
};
