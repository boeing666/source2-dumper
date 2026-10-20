#pragma once

class CCitadel_Modifier_Familiar_MovingToAttach : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x140, size 0x4, align 4
    CHandle< C_BaseEntity > m_hProjectile; // offset 0x144, size 0x4, align 4
};
