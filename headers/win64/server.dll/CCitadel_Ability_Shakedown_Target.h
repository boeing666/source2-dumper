#pragma once

class CCitadel_Ability_Shakedown_Target : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1100, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CHandle< CCitadel_Ability_Yakuza_Shakedown > m_hShadowdownAbility; // offset 0xF70, size 0x4, align 4
    Vector m_AimPos; // offset 0xF74, size 0xC, align 4
    char _pad_0F80[0x180]; // offset 0xF80
};
