#pragma once

class CCitadel_Ability_ExplosiveBarrel : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1378, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CHandle< CCitadelProjectile > m_hBarrel; // offset 0xF70, size 0x4, align 4
    char _pad_0F74[0x404]; // offset 0xF74
};
