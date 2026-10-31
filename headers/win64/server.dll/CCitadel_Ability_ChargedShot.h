#pragma once

class CCitadel_Ability_ChargedShot : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1770, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    ParticleIndex_t m_ChannelParticle; // offset 0x14A8, size 0x4, align 255
    ShotID_t m_LastWallRicochetShotID; // offset 0x14AC, size 0x4, align 255
    char _pad_14B0[0x2C0]; // offset 0x14B0
};
