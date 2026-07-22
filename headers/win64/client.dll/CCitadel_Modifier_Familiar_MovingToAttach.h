#pragma once

class CCitadel_Modifier_Familiar_MovingToAttach : public CCitadelModifier /*0x0*/  // sizeof 0xC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0xC0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hProjectile; // offset 0xC4, size 0x4, align 4
};
