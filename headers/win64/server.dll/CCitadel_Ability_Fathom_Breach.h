#pragma once

class CCitadel_Ability_Fathom_Breach : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    ParticleIndex_t m_nRollFXIndex; // offset 0x14A0, size 0x4, align 255
    bool m_bInFlight; // offset 0x14A4, size 0x1, align 1
    char _pad_14A5[0x373]; // offset 0x14A5
};
