#pragma once

class CCitadel_Ability_Shakedown_Target : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CCitadel_Ability_Yakuza_Shakedown > m_hShadowdownAbility; // offset 0x14A8, size 0x4, align 4
    VectorWS m_AimPos; // offset 0x14AC, size 0xC, align 4
    char _pad_14B8[0x210]; // offset 0x14B8
};
