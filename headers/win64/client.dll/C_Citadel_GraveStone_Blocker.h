#pragma once

class C_Citadel_GraveStone_Blocker : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xE10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE00]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xE00, size 0x4, align 4
    int32 m_iGravestoneState; // offset 0xE04, size 0x4, align 4
    float32 m_flLifetime; // offset 0xE08, size 0x4, align 4
    char _pad_0E0C[0x4]; // offset 0xE0C
};
