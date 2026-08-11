#pragma once

class CCitadel_Ability_StormCloud : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1300, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0xF70, size 0x4, align 255
    char _pad_0F74[0x384]; // offset 0xF74
    float32 m_flFloat; // offset 0x12F8, size 0x4, align 4 | MNetworkEnable
    int32 m_nLightningStrikesRemaining; // offset 0x12FC, size 0x4, align 4 | MNetworkEnable
};
