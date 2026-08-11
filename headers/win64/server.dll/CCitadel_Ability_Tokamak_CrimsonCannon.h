#pragma once

class CCitadel_Ability_Tokamak_CrimsonCannon : public CCitadelBaseAbility /*0x0*/  // sizeof 0x13D0, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF90]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_TargetPreviews; // offset 0xF90, size 0x18, align 8
    bool m_bAirCast; // offset 0xFA8, size 0x1, align 1 | MNetworkEnable
    char _pad_0FA9[0x427]; // offset 0xFA9
};
