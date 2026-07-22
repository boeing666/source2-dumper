#pragma once

class CCitadel_Ability_PowerJump : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x13E8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11DC]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x11DC, size 0x4, align 255
    bool m_bAirRaiding; // offset 0x11E0, size 0x1, align 1 | MNetworkEnable
    char _pad_11E1[0x207]; // offset 0x11E1
};
