#pragma once

class CCitadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xC10, size 0x4, align 4
    float32 m_flLifetime; // offset 0xC14, size 0x4, align 4
    char _pad_0C18[0x8]; // offset 0xC18
};
