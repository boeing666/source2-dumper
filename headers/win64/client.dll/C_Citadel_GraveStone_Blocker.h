#pragma once

class C_Citadel_GraveStone_Blocker : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xDB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xDA8, size 0x4, align 4
    int32 m_iGravestoneState; // offset 0xDAC, size 0x4, align 4
    float32 m_flLifetime; // offset 0xDB0, size 0x4, align 4
    char _pad_0DB4[0x4]; // offset 0xDB4
};
