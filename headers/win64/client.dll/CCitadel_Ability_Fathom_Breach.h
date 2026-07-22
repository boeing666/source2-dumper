#pragma once

class CCitadel_Ability_Fathom_Breach : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1460, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    ParticleIndex_t m_nRollFXIndex; // offset 0x11D8, size 0x4, align 255
    bool m_bInFlight; // offset 0x11DC, size 0x1, align 1 | MNetworkEnable
    char _pad_11DD[0x283]; // offset 0x11DD
};
