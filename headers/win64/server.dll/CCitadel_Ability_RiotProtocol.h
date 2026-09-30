#pragma once

class CCitadel_Ability_RiotProtocol : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1558, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    ParticleIndex_t m_ChargeUpParticle; // offset 0x14A0, size 0x4, align 255
    bool m_bActive; // offset 0x14A4, size 0x1, align 1
    char _pad_14A5[0xB3]; // offset 0x14A5
};
