#pragma once

class CCitadel_Ability_Shakedown_Target : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x18F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CHandle< CCitadel_Ability_Yakuza_Shakedown > m_hShadowdownAbility; // offset 0x16D8, size 0x4, align 4
    VectorWS m_AimPos; // offset 0x16DC, size 0xC, align 4
    char _pad_16E8[0x210]; // offset 0x16E8
};
