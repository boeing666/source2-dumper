#pragma once

class CCitadel_Ability_Fathom_Breach : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1A58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    ParticleIndex_t m_nRollFXIndex; // offset 0x16E0, size 0x4, align 255
    bool m_bInFlight; // offset 0x16E4, size 0x1, align 1
    char _pad_16E5[0x373]; // offset 0x16E5
};
