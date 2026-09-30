#pragma once

class CAbility_Synth_Barrage : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1C48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    ShotID_t m_tLastShotID; // offset 0x14A0, size 0x4, align 255
    char _pad_14A4[0x794]; // offset 0x14A4
    int32 m_nProjectilesScheduled; // offset 0x1C38, size 0x4, align 4
    ParticleIndex_t m_ChannelParticle; // offset 0x1C3C, size 0x4, align 255
    GameTime_t m_flNextShootTime; // offset 0x1C40, size 0x4, align 255
    char _pad_1C44[0x4]; // offset 0x1C44
};
