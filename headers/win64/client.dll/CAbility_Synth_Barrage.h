#pragma once

class CAbility_Synth_Barrage : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1768, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x1758]; // offset 0x0
    int32 m_nProjectilesScheduled; // offset 0x1758, size 0x4, align 4
    ParticleIndex_t m_ChannelParticle; // offset 0x175C, size 0x4, align 255
    GameTime_t m_flNextShootTime; // offset 0x1760, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1764[0x4]; // offset 0x1764
};
