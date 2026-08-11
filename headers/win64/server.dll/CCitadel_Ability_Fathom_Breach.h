#pragma once

class CCitadel_Ability_Fathom_Breach : public CCitadelBaseAbility /*0x0*/  // sizeof 0x11F8, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ParticleIndex_t m_nRollFXIndex; // offset 0xF70, size 0x4, align 255
    bool m_bInFlight; // offset 0xF74, size 0x1, align 1 | MNetworkEnable
    char _pad_0F75[0x283]; // offset 0xF75
};
