#pragma once

class CCitadel_MagicianTurret : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xDB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xDA8, size 0x4, align 4
    char _pad_0DAC[0x4]; // offset 0xDAC
};
