#pragma once

class CCitadel_Ability_Shakedown_Target : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1900, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CHandle< CCitadel_Ability_Yakuza_Shakedown > m_hShadowdownAbility; // offset 0x16E0, size 0x4, align 4
    VectorWS m_AimPos; // offset 0x16E4, size 0xC, align 4
    char _pad_16F0[0x210]; // offset 0x16F0
};
