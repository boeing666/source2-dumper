#pragma once

class CCitadel_Modifier_Familiar_MovingToAttach : public CCitadelModifier /*0x0*/  // sizeof 0xE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD4]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0xD4, size 0x4, align 4
    CHandle< CBaseEntity > m_hProjectile; // offset 0xD8, size 0x4, align 4
    char _pad_00DC[0x4]; // offset 0xDC
};
