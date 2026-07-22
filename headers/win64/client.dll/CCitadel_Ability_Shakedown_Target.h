#pragma once

class CCitadel_Ability_Shakedown_Target : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1368, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CHandle< CCitadel_Ability_Yakuza_Shakedown > m_hShadowdownAbility; // offset 0x11D8, size 0x4, align 4
    Vector m_AimPos; // offset 0x11DC, size 0xC, align 4
    char _pad_11E8[0x180]; // offset 0x11E8
};
