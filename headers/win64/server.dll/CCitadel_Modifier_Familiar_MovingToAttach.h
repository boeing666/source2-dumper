#pragma once

class CCitadel_Modifier_Familiar_MovingToAttach : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x154]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x154, size 0x4, align 4
    CHandle< CBaseEntity > m_hProjectile; // offset 0x158, size 0x4, align 4
    char _pad_015C[0x4]; // offset 0x15C
};
