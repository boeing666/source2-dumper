#pragma once

class CAbility_Synth_Barrage : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1C50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    ShotID_t m_tLastShotID; // offset 0x14A8, size 0x4, align 255
    char _pad_14AC[0x794]; // offset 0x14AC
    int32 m_nProjectilesScheduled; // offset 0x1C40, size 0x4, align 4
    ParticleIndex_t m_ChannelParticle; // offset 0x1C44, size 0x4, align 255
    GameTime_t m_flNextShootTime; // offset 0x1C48, size 0x4, align 255
    char _pad_1C4C[0x4]; // offset 0x1C4C
};
