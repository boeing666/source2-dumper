#pragma once

class CCitadel_Ability_StormCloud : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1570, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x11D8, size 0x4, align 255
    char _pad_11DC[0x384]; // offset 0x11DC
    float32 m_flFloat; // offset 0x1560, size 0x4, align 4 | MNetworkEnable
    int32 m_nLightningStrikesRemaining; // offset 0x1564, size 0x4, align 4 | MNetworkEnable
    char _pad_1568[0x8]; // offset 0x1568
};
