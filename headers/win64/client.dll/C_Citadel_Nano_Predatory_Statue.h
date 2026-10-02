#pragma once

class C_Citadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xE18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE10]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xE10, size 0x4, align 4
    float32 m_flLifetime; // offset 0xE14, size 0x4, align 4
};
