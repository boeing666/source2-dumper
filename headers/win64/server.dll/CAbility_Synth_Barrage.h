#pragma once

class CAbility_Synth_Barrage : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1508, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ShotID_t m_tLastShotID; // offset 0xF70, size 0x4, align 255
    char _pad_0F74[0x584]; // offset 0xF74
    int32 m_nProjectilesScheduled; // offset 0x14F8, size 0x4, align 4
    ParticleIndex_t m_ChannelParticle; // offset 0x14FC, size 0x4, align 255
    GameTime_t m_flNextShootTime; // offset 0x1500, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1504[0x4]; // offset 0x1504
};
