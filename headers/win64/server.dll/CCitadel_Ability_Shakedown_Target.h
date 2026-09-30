#pragma once

class CCitadel_Ability_Shakedown_Target : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CHandle< CCitadel_Ability_Yakuza_Shakedown > m_hShadowdownAbility; // offset 0x14A0, size 0x4, align 4
    VectorWS m_AimPos; // offset 0x14A4, size 0xC, align 4
    char _pad_14B0[0x210]; // offset 0x14B0
};
